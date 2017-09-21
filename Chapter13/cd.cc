//Changed by Ghostxiu 2017/9/21
//第十三章 编程练习一
#include "cd.h"
#include <iostream>
#include <cstring>
using std::strcpy;
using std::cout ;
using std::endl;

//基类Cd的成员
Cd::Cd(char *s1 ,char * s2 ,int n ,
	double x)
{
	strcpy(performers,s1);
	strcpy(label,s2);
	selections = n;
	playtime = x;
}

//复制构造函数
Cd::Cd(const Cd & d)
{
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selections = d.selections ;
	playtime = d.playtime;
}

void Cd::Report() const
{
	cout << "Cd's Perfomace: " << performers
		<< " , Label = " << label <<" .\n";
	cout << "Songs selection : " << selections
		<< " , Palytime : " << playtime << " .\n " ;
}
/*
Cd & Cd::operator=(const Cd & d)
{
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selections = d.selections ;
	playtime = d.playtime;
}
*/
//派生类Classic的成员
Classic::Classic(char *s1, char *s2 , char * s3 ,
				int n , double x) : Cd(s2,s3,n,x)
{
	strcpy(cd_discribe,s3);
}

Classic::Classic(const Classic & cl ) :
	Cd(cl)
{

	strcpy(cd_discribe,cl.cd_discribe);
}
	//virtual  ~Classic();//不需要
void Classic::Report() const
{
	Cd::Report();
	cout << "The classical  : "
		<< cd_discribe <<endl;

}
//注意不进行动态内存分配不需要重载赋值运算符
/*
Classic & Classic::operator=(const Classic & cl)
{
	Cd::operator=(cl);//将cl转化为Cd类
	strcpy(cd_discribe,cl.cd_discribe);
}
*/
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13
