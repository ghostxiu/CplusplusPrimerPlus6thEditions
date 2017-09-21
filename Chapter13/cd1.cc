//Changed by Ghostxiu 2017/9/21
//第十三章 编程练习二
#include "cd1.h"
#include <iostream>
#include <cstring>
using std::strcpy;
using std::cout ;
using std::endl;
using std::strlen;
//基类Cd的成员
//默认构造函数
Cd::Cd()
{
	performers = new char[1];
	label = new char[1];
	performers = "\0";
	label = "\0";
}
Cd::Cd(char *s1 ,char * s2 ,int n ,
	double x)
{
	performers = new char[strlen(s1)+1];
	label = new char[strlen(s2)+1];
	strcpy(performers,s1);
	strcpy(label,s2);
	selections = n;
	playtime = x;
}

//复制构造函数
Cd::Cd(const Cd & d)
{
	performers = new char[strlen(d.performers)+1];
	label = new char[strlen(d.label)+1];
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

Cd & Cd::operator=(const Cd & d)
{
	//赋值前要删除原来的空间
	if(this == &d)
	{
		return *this ;
	}
	delete [] performers;
	delete [] label ;
	performers = new char[strlen(d.performers)+1];
	label = new char[strlen(d.label)+1];
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selections = d.selections ;
	playtime = d.playtime;

	return *this;
}

//析构函数
Cd::~Cd()
{
	delete [] performers;
	delete [] label ;
}

//派生类Classic的成员
Classic::Classic(char *s1, char *s2 , char * s3 ,
				int n , double x) : Cd(s2,s3,n,x)
{
	cd_discribe = new char[strlen(s3)+1];
	strcpy(cd_discribe,s3);
}

Classic::Classic(const Classic & cl ) :
	Cd(cl)
{
	cd_discribe = new char[strlen(cl.cd_discribe)+1];
	strcpy(cd_discribe,cl.cd_discribe);
}
	//virtual  ~Classic();//不需要
void Classic::Report() const
{
	Cd::Report();
	cout << "The classical  : "
		<< cd_discribe <<endl;

}

Classic & Classic::operator=(const Classic & cl)
{
	if(this == &cl )
	{
		return *this ;
	}

	Cd::operator=(cl);//将cl转化为Cd类
	delete [] cd_discribe ;
	cd_discribe = new char[strlen(cl.cd_discribe)+1];
	strcpy(cd_discribe,cl.cd_discribe);
	return *this;
}

//析构函数不要忘了（在要动态分配内存空间时）
Classic::~Classic()
{
	delete cd_discribe;
}
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13
