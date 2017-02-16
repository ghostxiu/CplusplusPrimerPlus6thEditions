//函数和array对象
#include<iostream>
#include<array>
#include<string>

const int Seasons = 4 ;
const std::array<std::string,Seasons> Snames =
	{"Spring","Summer","Fall","winter"};

void fill_s(std::array<double,Seasons> *pa);
void show(std::array<double,Seasons> pd);

int main()
{
	std::array<double,Seasons> expenses;
	fill_s(&expenses);
	show(expenses);
	return 0 ;//在C++11标准中不写return 0 会报错
}

void fill_s(std::array<double,Seasons> *pa)
{
	for(int i = 0 ; i < Seasons ; ++i)
	{
		std::cout << "Enter " << Snames[i] << " expense:";
		std::cin >> (*pa)[i];
	}

}

void show(std::array<double,Seasons> pd)
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
