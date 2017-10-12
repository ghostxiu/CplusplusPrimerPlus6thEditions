//Changed by Ghostxiu 2017/10/11
//原书程序清单14.22 内容
//演示模板类和友元
//模版友元 有三类
//1.非模板友元 2.约束模板友元
//3.非约束模板友元
//本程序演示 非模板友元
#include<iostream>

using std::cout ;
using std::endl;

//类声明
template <typename T>
class Hasfriend{
private:
	T item ;
	static int ct ;
public:
	Hasfriend(const T & i) :item(i) {ct++;}
	~Hasfriend () {ct--;}
	friend void counts();
	friend void reports(Hasfriend<T> &);
};

//类定义
template <typename T>
int Hasfriend<T>::ct = 0 ;

void counts()
{
	cout << "int count: " << Hasfriend<int>::ct << "; " ;
	cout << "double count: " <<  Hasfriend<double>::ct << endl ;
}
void reports(Hasfriend<int> & hf )
{
	cout << "Hasfriend<int>: " << hf.item << endl ;
}
void reports(Hasfriend<double> & hf )
{
	cout << "Hasfriend<double>: " << hf.item << endl ;
}

int main()
{
	cout << "No objects declared: ";
	counts();
	Hasfriend<int> hfi1(10);
	cout << "After hfi1 declared: " ;
	counts();
	Hasfriend<int> hfi2(20);
	cout << "After hfi2 declared: " ;
	counts();
	Hasfriend<double> hfdb(20.23);
	cout << "After hfdb declared: " ;
	counts();
	reports(hfi1);
	reports(hfi2);
	reports(hfdb);

	return 0 ;
}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
