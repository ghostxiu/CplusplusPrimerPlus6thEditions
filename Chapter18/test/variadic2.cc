//Changed by Ghostxiu 2018/1/18
//原書程序清單18.10容
//可变参数模版
//对variadic1.cc的改进:1.剩下一个参数的时候使用回车换行，2.使用const &节省空间
#include <iostream>
#include <string>

//模板参数包，函数参数包，展开参数包，递归
using namespace std ;
//0个参数的参数包，用于中断
void show_list3(){}

//一个参数的时候
template<typename T>
void show_list3(const T & value)
{
	cout << value << "\n";
}


//2个以上的参数
template<typename T,typename... Args>
void show_list3(const T & value ,const Args&... args)
{
	cout << value << " , ";
	show_list3(args...);
}

int main()
{

	int n = 14 ;
	double x = 2.7182;
	string sl = "Mr. String Objects!";
	show_list3(n,x);
	show_list3(x*x,'!',n/2,sl);

	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter18/test
