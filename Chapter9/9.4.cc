//main.cc
#include"sale.h"
#include<iostream>
using namespace SALES;
static Sales A,B;

int main()
{
	using namespace std ;
	double ar[3] = {6.5,7,9};
	setSales(A,ar,3);
	showSales(A);
	setSales(B);
	showSales(B);
    cout << "\n\n\nDone!" << endl;
    return 0;
}

//sale.cc
#include"sale.h"
using namespace SALES;
#include<iostream>
//XXX-注意头文件包含函数的时候的使用方法要用解析符
void SALES::setSales(Sales & s , const double ar[], int n)
{
	double sum = 0.0 ;
	s.max = s.min = ar[0];
	for(int i = 0 ; i < n ; ++i)
	{
		if(ar[i] > s.max )
		{
			s.max = ar[i];
		}
		else if(ar[i] < s.min)
		{
			s.min = ar[i];
		}
		s.sales[i] = ar[i];
		sum += ar[i];
	}
	s.average = sum / n ;
	showSales(s);
	//xxx-还应该有一个0填充的函数
	std::fill( &s.sales[0], &s.sales[0]+n, 0);

}
void SALES::setSales(Sales & s)
{
	std :: cout << "Please enter the Sales:\n";
	double sum = 0.0 ;
	s.max = s.min = 0.0;
	for(int i = 0 ; i < QUARTERS ; ++i)
	{
		std:: cout << "# " << i + 1 << ":";
		std::cin >> s.sales[i];
		if(s.sales[i] > s.max ||  s.max == 0)
		{
			s.max = s.sales[i];
		}
		if(s.sales[i] < s.min || s.min == 0 )
		{
			s.min = s.sales[i];
		}
		sum += s.sales[i];
	}
	s.average = sum / QUARTERS ;

	showSales(s);
}



void SALES::showSales(const Sales & s)
{
	using std::cout;
	using std::endl;
	cout << "\n\n\nNow show the Sales:\n";
	for (int i = 0; i < QUARTERS; ++i)
	{
		cout << "#" << i + 1 << ":" << s.sales[i] << "\t";
	}
	cout << endl;
	cout << "The max of the sales is :" << s.max << endl;
	cout << "The average of the sales is :" << s.average << endl;
	cout << "The minium of the sales is :" << s.min << endl;
}

//sale.h
#ifndef SALE_H_
#define SALE_H_
//避免多次引用
namespace SALES
{
	const int QUARTERS = 4;
	struct  Sales
	{
		double sales[QUARTERS];
		double average ;
		double max ;
		double min ;
	};
	void setSales(Sales & s , const double ar[], int n) ;
	void setSales(Sales & s) ;
	void showSales(const Sales & s);
}
#endif
