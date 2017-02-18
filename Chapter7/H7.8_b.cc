//不使用array完成程序7.15.cc
//使用结构
#include<iostream>
#include<string>

const int Seasons = 4 ;
const char * Snames[Seasons] =
	{"Spring","Summer","Fall","winter"};
struct expense
{
	double spend[Seasons];
};
void fill_s(expense *pa);
void show(const expense *pd);

int main()
{
	expense *E =new expense[Seasons];
	fill_s(E);
	show(E);
	delete E;
	return 0 ;//在C++11标准中不写return 0 会报错
}

void fill_s(expense *pa)
{
	for(int i = 0 ; i < Seasons ; ++i)
	{
		std::cout << "Enter " << Snames[i] << " expense:";
		std::cin >> pa->spend[i];
	}

}

void show(const expense * pd)
{
	std::cout << "Expense:\n";
	double total = 0.0 ;
	for(int i = 0 ; i < Seasons ; ++i )
	{
		std::cout << Snames[i] << ":$" << pd->spend[i] << std::endl;
		total += pd->spend[i] ;
	}
	std::cout << "Total expense:$" << total << std::endl ;
}
