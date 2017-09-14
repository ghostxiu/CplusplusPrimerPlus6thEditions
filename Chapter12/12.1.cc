//Changed by Ghostxiu 2017/9/12
//include cow.h cow.cc 包含cow.h cow.cc
#include "cow.cc"

int main()
{
	Cow c1 ;//使用构造函数Cow();
	Cow c2("nike","fresh gress",180);//使用构造函数Cow(const char * nm , const char * ho , double wt);
	Cow c3(c2);//使用复制构造函数 Cow(const Cow & c)
	c1 = c3 ;//使用	Cow & operator = (const Cow & c);
	c1.ShowCow();//使用void ShowCow() const
	return 0;
}
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12/
