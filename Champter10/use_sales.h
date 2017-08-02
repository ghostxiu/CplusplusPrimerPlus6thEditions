#include"sales.h"
using namespace SALES;
#include<iostream>
//XXX-注意头文件包含函数的时候的使用方法要用解析符
Sales::Sales(const double ar[], int n)
{
	double sum = 0.0 ;
	this->max = this->min = ar[0];
	for(int i = 0 ; i < n ; ++i)
	{
		if(ar[i] > this->max )
		{
			this->max = ar[i];
		}
		else if(ar[i] < this->min)
		{
			this->min = ar[i];
		}
		this->sales[i] = ar[i];
		sum += ar[i];
	}
	this->average = sum / n ;
	showSales();
	//xxx-还应该有一个0填充的函数
	std::fill( &sales[0], &sales[0]+n, 0);

}
void Sales::setSales()
{
	std :: cout << "Please enter the Sales:\n";
	double sum = 0.0 ;
	this->max = this->min = 0.0;
	for(int i = 0 ; i < QUARTERS ; ++i)
	{
		std:: cout << "# " << i + 1 << ":";
		std::cin >>this->sales[i];
		if(this->sales[i] > this->max ||  this->max == 0)
		{
			this->max = this->sales[i];
		}
		if(this->sales[i] < this->min ||this->min == 0 )
		{
			this->min = this->sales[i];
		}
		sum += this->sales[i];
	}
	this->average = sum / QUARTERS ;

	showSales();
}



void Sales::showSales()
{
	using std::cout;
	using std::endl;
	cout << "\n\n\nNow show the Sales:\n";
	for (int i = 0; i < QUARTERS; ++i)
	{
		cout << "#" << i + 1 << ":" << this->sales[i] << "\t";
	}
	cout << endl;
	cout << "The max of the sales is :" << this->max << endl;
	cout << "The average of the sales is :" << this->average << endl;
	cout << "The minium of the sales is :" << this->min << endl;
}
