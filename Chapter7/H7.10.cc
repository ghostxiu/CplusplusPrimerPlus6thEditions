//函数指针的应用
//详见7.19.cc
#include<iostream>
double add(double x , double y);
double max_minus(double x , double y);
double mul(double x ,double y);
double max_div(double x , double y);
double caculate(double x ,double y, double (*p) (double x ,double y) );
const int Size = 4;

int main()
{
	using namespace std ;
	cout << "Enter to number ,then we show s sort of cacluate result of them:\n";
	double a, b ;
	double (*pf[Size]) (double , double) = {add,max_minus,mul,max_div};
	//auto pa = pf;
	while( cin >> a >> b )
	{
		if( a <= 0 || b <= 0 )
		{
			cout << "Please enter postive numbers!\n";
			continue;
		}
		cout << "Now show the results:\n" ;
		for(int i = 0 ; i < Size ; ++i )
		{
			cout << "result#" << i + 1 << ": " ;
			cout << caculate(a,b,(*pa[i])) << endl ;

		}
		cout << "Please enter two positive num(q to quit):\n";
	}
	cin.clear();
	cin.get();
	cin.get();

	return 0;
}

double add(double x ,double y)
{
	return x + y ;
}

double max_minus(double x ,double y )
{
	double m  = x - y ;
	if( m > 0 )
	{
		return m ;
	}
	else return -m ;
}

double mul(double x , double y)
{
	return x * y ;
}

double max_div(double x , double y )
{
	int tmp ;
	if( x < y )
	{
		tmp = x ; x = y ; y = tmp ;
	}
	return x / y ;
}

double caculate(double x, double y , double (*p)( double , double))
{
	return (*p)(x,y);
}
