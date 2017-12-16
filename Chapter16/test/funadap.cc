//Changed by Ghostxiu 2017/12/7
//原书程序清单16.16 内容
//STL  方法
//预定义函数符 自适应函数符和函数适配器
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <functional> //包含模板类函数对象 如plus<>


void Show(double);
const int LIM  = 6;

using namespace std;
int main()
{
	vector <double> gr8 = {28,29,30,35,38,59};
	vector <double> m8 = {63,65,69,75,80,99};

	cout.setf(ios_base::fixed);
	cout.precision(1);
	cout << "gr8: \t";
	for_each(gr8.begin(),gr8.end(),Show);
	cout << "\ngr8: \t";
	for_each(m8.begin(),m8.end(),Show);
	cout << endl;

	vector <double> SUM(LIM);
	transform(gr8.begin(),gr8.end(),m8.begin(),SUM.begin(),plus<int>());
	cout << "sum: \t";
	for_each(SUM.begin(),SUM.end(),Show);
	cout << endl;

	vector <double> Pros(LIM);
	transform(gr8.begin(),gr8.end(),Pros.begin(),bind1st(multiplies<double>(),2.5));
	cout << "prod: \t";
	for_each(Pros.begin(),Pros.end(),Show);
	cout << endl;

	return 0;
}

void Show(double v)
{
	cout.width(6);
	cout << v << " " ;
}



//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
