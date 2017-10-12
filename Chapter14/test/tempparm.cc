//Changed by Ghostxiu 2017/10/11
//原书程序清单14.21 内容
//将模版用作参数
//注意与程序清单 14.19 即 pairs.cc对比
//本程序使用模板类作为参数实现了类似Pair类的数组
#include <iostream>
#include "stacktp.h"

//类声明+定义
template < template < typename T> class Thing>
class Crab
{
private:
	Thing <int> s1 ;
	Thing <double> s2 ;
public:
	Crab() {}
	bool push(int a , double x ) { return s1.push(a) && s2.push(x) ;}
	bool pop(int & a ,double &x) { return s1.pop(a) && s2.pop(x);}

};


//主程序入口
int main()
{
	using std::cout ;
	using std::cin;
	using std::endl;
	Crab<Stack> nebula ;

	int ni ;
	double nb ;
	cout << "Enter int double pairs ,such as 4 3.5 (0 0 to end):\n";
	while(cin>>ni>>nb && ni > 0 && nb >0)
	{
		if(!nebula.push(ni,nb))
		{
			break;
		}
	}
	while(nebula.pop(ni,nb))
		cout << ni << " , " << nb << endl ;
	cout << "Done.\n";


	return 0;
}
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
