//Changed by Ghostxiu 2017/9/15
//原书程序清单13.8内容 虚方法
#include "brass.h"
using std::cout ;
using std::cin;
using std::endl ;
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();//设定精度
void restore(format f , precis p) ;


//Brass
Brass::Brass(const string & fl , long an  , double bal )
{
	fullname = fl ;
	accNum = an ;
	balance = bal ;
}

void Brass::Deposit( double amt )
{
	if ( amt < 0 )
	{
		cout << "Nagative deposit not allowed; "
			<< "deposit is cancelled.\n";
	}
	else
		balance += amt ;
}

void Brass::WithDraw( double amt)
{
	//设置两位小数的格式
	format initalState = setFormat();
	precis prec = cout.precision(2);

	if(amt < 0)
		cout << "Withdrawal amount must be postive; "
			" Withdrawal canceled.\n";
	restore(initalState,prec);//还原为默认精度设置
}

void Brass::ViewAcct() const
{
	format initalState = setFormat();
	precis prec = cout.precision(2);
	cout << "Client : " << fullname << endl ;
	cout << "Account number : " << accNum <<endl ;
	cout << "Balance : $ " << balance << endl;
	restore(initalState,prec);
}


//BrassPlus类方法的实现
BrassPlus::BrassPlus(const string & fl , long an  ,
			double bal  , double ml  , double r   )
			: Brass(fl , an , bal ),maxLoan(ml),rate(r),owesBank(0.0){}
BrassPlus::BrassPlus(const Brass & ba , double ml ,
					double r ) : Brass(ba)
{
	maxLoan = ml;
	rate = r ;
	owesBank = 0.0 ;
}

//重载基类的ViewAcct()函数
void BrassPlus::ViewAcct() const
{
	format initalState = setFormat();
	precis prec = cout.precision(2);

	Brass::ViewAcct();

	cout << "Maxium loan: $ " << maxLoan <<endl;
	cout << "Owed to bank : $ " << owesBank <<endl;
	cout.precision(3);
	cout << "Loan rate : " << 100 * rate << "%\n";

	restore(initalState,prec);

}

void BrassPlus::WithDraw(double amt)
{
	format initalState = setFormat();
	precis prec = cout.precision(2);

	double bal = Balance();
	if( amt <= bal )
	{
		Brass::WithDraw(amt);
	}
	else if ( amt <= bal + maxLoan - owesBank)
	{
		double advance = amt - bal ;
		owesBank += advance * (1.0 + rate ) ;
		cout << "Bank advance : $ " << advance << endl ;
		cout << "Finance charge : $ " << advance* rate << endl;
		Deposit(advance);
		Brass::WithDraw(amt);
	}
	else
	{
		cout << "Credit limit exceeded. Transaction cancelled.\n";
	}

	restore(initalState,prec);
}

format setFormat()
{
	//设置成保存两位小数
	return  cout.setf(std::ios_base::fixed,
					std::ios_base::floatfield);
}

void restore(format f , precis p)
{
	cout.setf(f,std::ios_base ::floatfield);
	cout.precision(p);
}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13/test
