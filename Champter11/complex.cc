//modify by Ghostxiu 2017/9/1
#include<iostream>
#include"complex.h"
using std::cin ;
using std::cout ;
using std::endl ;

complex::complex()
{
	a = b = 0.0;
}

complex::complex(double x,double y)
{
	a = x ;
	b = y ;
}

complex::~complex(){}

//重载
complex complex::operator+(const complex &c)
{
	double a1,b1;
	a1 = a + c.a ;
	b1 = b + c.b ;
	return complex(a1,b1);
}
complex complex::operator-(const complex &c)
{
	double a1,b1;
	a1 = a - c.a ;
	b1 = b - c.b ;
	return complex(a1,b1);
}
complex complex::operator*(const complex &c)
{
	double a1,b1;
	a1 = a*c.a - b*c.b ;
	b1 = a*c.b + b*c.a;
	return complex(a1,b1);
}

complex complex::operator*(double db)
{
	double a1,b1;
	a1 = a*db;
	b1 = b*db;
	return complex(a1,b1);
}

complex complex::operator~()
{
	return complex(a,-b);
}

//注意此处要修改c，不能用const
istream & operator>>(istream & is ,complex &c)
{
	cout <<"real:"<<endl;
	is >> c.a ;
	cout << "imginary:" <<endl;
	is >> c.b;
}

ostream & operator<<(ostream & os , const complex &c)
{
	os <<"("<<c.a<<","<<c.b<<"i)\n";
}

complex operator*(double b,const complex &c)
{
	return complex(c.a*b,c.b*b);//置换位置
}

/* xxx-此处有一个问题就是使用如下形式会出问题
complex operator*(double b,const complex &c)
{
	return b*c;//置换位置
}
*/
