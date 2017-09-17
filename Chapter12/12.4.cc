//Changed by Ghostxiu 2017/9/17
//包括文件 stack0.h stack0.cc
#include "stack0.cc"
int main()
{
	using std::cout ;
	using std::endl;
	Stack st1(5);//使用默认构造函数开辟一个空间为5的栈

	for(int i = 0 ; i < 5 ; ++i)
	{
		st1.push(i);
	}

	Stack st2(st1);//使用复制构造函数
	Stack st3 = st2 ; //使用重载的赋值符号

	Item t ;
	while(!st3.isempty())
	{
		st3.pop(t);
		cout << t << "\t";
	}
	cout <<endl ;


	return 0;
}
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12/
