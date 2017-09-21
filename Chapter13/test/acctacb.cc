//Changed by Ghostxiu 2017/9/19
//原书程序清单13.12内容 虚方法
#include "acctabc.h"
using std::cout ;
using std::cin;
using std::endl ;
using std::ios_base;



//抽象基类 AcctABC
AcctABC::AcctABC(const string & s  ,long an , double bal )
{
	fullname = s ;
	accNum = an ;
	balance = bal ;
}
void AcctABC::Deposit(double amt)
{
	if ( amt < 0 )
	{
		cout << "Nagative deposit not allowed; "
			<< "deposit is cancelled.\n";
	}
	else
		balance += amt ;
}

void AcctABC::WithDraw(double amt) //纯虚函数
{
	balance -= amt ;
}

AcctABC::Formatting AcctABC::SetFormat() const
{
	Formatting f ;
	f.flag =
		cout.setf(ios_base::fixed,ios_base::floatfield);
	f.pr = cout.precision(2);
	return f ;
}
void AcctABC::Restore(Formatting & f) const
{
	cout.setf(f.flag,ios_base::floatfield);
	cout.precision(f.pr);
}




//派生类Brass




void Brass::WithDraw( double amt)
{
	if(amt < 0)
		cout << "Withdrawal amount must be postive; "
			" Withdrawal canceled.\n";
	else if ( amt <= Balance())
		AcctABC::WithDraw(amt);//还原为默认精度设置
	else
		cout << "Withdrawal amount of $ " << amt
			<< " exceeds your balance.\n"
			<<"Withdrawal canceled.\n";

}

void Brass::ViewAcct() const
{
	Formatting f= SetFormat() ;


	cout << "Client : " <<	Fullname()<< endl ;
	cout << "Account number : " << AccNum() <<endl ;
	cout << "Balance : $ " << Balance()<< endl;
	Restore(f);
}


//BrassPlus类方法的实现
BrassPlus::BrassPlus(const string & fl , long an  ,
			double bal  , double ml  , double r   )
			: AcctABC(fl , an , bal ),maxLoan(ml),rate(r),owesBank(0.0){}
BrassPlus::BrassPlus(const Brass & ba , double ml ,
					double r ) : AcctABC(ba)
{
	maxLoan = ml;
	rate = r ;
	owesBank = 0.0 ;
}

//重载基类的ViewAcct()函数
void BrassPlus::ViewAcct() const
{
	Formatting f = SetFormat();


	cout << "BrassPlus Client: " << Fullname() << endl ;
	cout << "Account Number : " << AccNum() <<endl ;
	cout << "Balance: $ " << Balance() <<endl ;


	cout << "Maxium loan: $ " << maxLoan <<endl;
	cout << "Owed to bank : $ " << owesBank <<endl;
	cout.precision(3);
	cout << "Loan rate : " << 100 * rate << "%\n";

	Restore(f);

}

void BrassPlus::WithDraw(double amt)
{
	Formatting f = SetFormat();

	double bal = Balance();
	if( amt <= bal )
	{
		AcctABC::WithDraw(amt);
	}
	else if ( amt <= bal + maxLoan - owesBank)
	{
		double advance = amt - bal ;
		owesBank += advance * (1.0 + rate ) ;
		cout << "Bank advance : $ " << advance << endl ;
		cout << "Finance charge : $ " << advance* rate << endl;
		Deposit(advance);
		AcctABC::WithDraw(amt);
	}
	else
	{
		cout << "Credit limit exceeded. Transaction cancelled.\n";
	}

	Restore(f);
}



//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13/test
