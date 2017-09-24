//Changed by Ghostxiu 2017/9/24
//第十三章 编程练习四
#include "port.h"
#include <cstring>
using std::endl;
using std::cout;
using std::strcpy;

//基类Port
Port::Port(const char * br  , const char * st  , int b )
{
	int len = strlen(br);
	brand = new char[len+1];
	strcpy(brand,br);
	strcpy(style,st);
	bottles = b ;
}

Port::Port(const Port &p)
{
	int len = strlen(p.brand);
	brand = new char[len+1];
	strcpy(brand,p.brand);
	strcpy(style,p.style);
	bottles = p.bottles;
}

Port & Port::operator= (const Port & p)
{
	if(this == &p)
	{
		return *this ;
	}
	delete brand ;
		int len = strlen(p.brand);
	brand = new char[len+1];
	strcpy(brand,p.brand);
	strcpy(style,p.style);
	bottles = p.bottles;
	return *this ;
}

Port & Port::operator+=(int b)
{
	bottles +=b;
	return *this ;
}

Port & Port::operator-=(int b)
{
	bottles -=b;
	return *this ;
}


void Port::show() const
{
	cout << "Brand: " << brand <<endl;
	cout << "Style: " << style << endl ;

}

ostream & operator << (ostream &os , const Port & p)
{
	cout << "Brand: " << p.brand <<endl;
	cout << "Style: " << p.style << endl ;
	return os ;
}


//派生类 VintagePort
	char *nickname ;
	int year ;

VintagePort::VintagePort():Port("\0","none",0)
{
    nickname = new char[1];
    nickname = '\0';
    year = 0 ;
}
VintagePort::VintagePort(const char * br , int b ,
						 const char *nn ,int y) :
						 	Port(br,"none",b)
{
	int len = strlen(nn);
	nickname = new char[len+1];
	strcpy(nickname,nn);
	year = y;
}
//注意对比复制构造函数和赋值符号的重载
VintagePort::VintagePort(const VintagePort & vp)
{
	nickname = new char [strlen(vp.nickname)+1];
	strcpy(nickname,vp.nickname);
	year = vp.year ;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if(this == & vp)
	{
		return * this ;
	}

	Port::operator=(vp);
	delete [] nickname;
	nickname = new char [strlen(vp.nickname)+1];
	strcpy(nickname,vp.nickname);
	year = vp.year ;
	return * this ;
}


//对比显示输出和重载<<
void VintagePort::show() const
{
	Port::show();
	cout << "Nickname : " << nickname <<endl;
	cout << "Year : " << year << endl;
}

ostream & operator<<(ostream & os , const VintagePort & vp)
{
	os <<(const Port & ) vp ;
	os << "Nickname : " << vp.nickname <<endl;
	os << "Year : " << vp.year << endl;
	return os ;
}
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13
