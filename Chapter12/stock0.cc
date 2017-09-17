//Changed by Ghostxiu 2017/9/17
//
#include "stock0.h"

using std::cout;
using std::ios_base;
Stock::Stock()
{
	company = new char[1];
	company = "\0";
	shares = 0 ;
	share_val = 0.0 ;
	total_val = 0.0 ;
}

Stock::Stock(const char * co , long n , double pr)
{
	int len = strlen(co);
	company = new char[len+1];
	strcpy(company,co);
	if(n < 0)
	{
		cout << "Number of shares can't be negative; "
			<< company << " shares set to 0.\n";
		shares = 0 ;
	}
	else
	{
		shares = n ;
	}
	share_val = pr ;
	set_tot();

}

Stock::~Stock()
{
	delete [] company;
}

//其他成员函数

void Stock::buy(long num , double price)
{
	if (num < 0 )
	{
		cout << "Number of shares purchased can't be negative."
			<< " Tansation is aborted.\n";
	}
	else
	{
		shares += num ;
		share_val += price ;
		set_tot();
	}

}

void Stock::sell(long num , double price )
{
	if(num < 0)
	{
		cout << "Number of shares purchased can't be negative."
			<< " Tansation is aborted.\n";
	}
	else if(num > shares)
	{
		cout << "You can't sell more than you have!"
			 << " Transition is aborted.\n";
	}
	else
	{
		shares -= num ;
		share_val += price ;
		set_tot();
	}

}

void Stock::update(double price)
{
	share_val =price ;
	set_tot();
}

void Stock::show() const
{
	ios_base::fmtflags orig =
		cout.setf(ios_base::fixed,ios_base::floatfield);
		std::streamsize prec = cout.precision(3);

	cout << "Company: " << company
		<< " Shares: " << shares <<'\n';

	cout << "  Share Price: $ " << share_val ;

	cout.precision(2);
	cout << "  Total Worth: $" << total_val << '\n';

	cout.setf(orig,ios_base::floatfield);
	cout.precision(prec) ;

}


const Stock & Stock::topval(const Stock & s) const
{
	if(s.total_val > total_val)
		return s ;
	else
		return *this;
}

//重载 <<
ostream & operator<<(ostream & os , const Stock & s)
{
	ios_base::fmtflags orig =
	os.setf(ios_base::fixed,ios_base::floatfield);
	std::streamsize prec = os.precision(3);

	os << "Company: " << s.company
		<< " Shares: " << s.shares <<'\n';

	os << "  Share Price: $ " << s.share_val ;

	os.precision(2);
	os << "  Total Worth: $" << s.total_val << '\n';

	os.setf(orig,ios_base::floatfield);
	os.precision(prec) ;

	return os ;
}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12/
