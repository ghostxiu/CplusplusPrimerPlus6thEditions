//不使用array完成程序7.15.cc
//函数和array对象
#include<iostream>
#include<string>

const int Seasons = 4 ;
const char * Snames[Seasons] =
	{"Spring","Summer","Fall","winter"};

void fill_s(double *pa);
void show(const double *pd);

int main()
{
	double *expenses = new double[Seasons];
	fill_s(expenses);
	show(expenses);
	return 0 ;//在C++11标准中不写return 0 会报错
}

void fill_s(double *pa)
{
	for(int i = 0 ; i < Seasons ; ++i)
	{
		std::cout << "Enter " << Snames[i] << " expense:";
		std::cin >> pa[i];
	}

}

void show(const double * pd)
{
	std::cout << "Expense:\n";
	double total = 0.0 ;
	for(int i = 0 ; i < Seasons ; ++i )
	{
		std::cout << Snames[i] << ":$" << pd[i] << std::endl;
		total += pd[i] ;
	}
	std::cout << "Total expense:$" << total << std::endl ;
}
