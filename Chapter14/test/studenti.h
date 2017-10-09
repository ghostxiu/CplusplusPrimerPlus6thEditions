//Changed by Ghostxiu 2017/9/15
//原书程序清单14.4 内容 has-a 继承
//私有继承，注意和前面的程序对比，前面的程序使用
//包含对象成员的类来实现 has-a 继承关系
#ifndef STUDENTI_H_
#define STUDENTI_H_

#include <iostream>
#include <valarray>
#include <string>
using std::string;

class Student : private string , private std::valarray<double>
{
private:
	typedef std::valarray<double> ArrayDb;
	//private method for score output
	std::ostream & arr_out ( std::ostream & os ) const ;
public:
	Student():string("Null Student"),ArrayDb(){}
	explicit Student(const string & s)
	:string(s),ArrayDb(){}
	explicit Student(int n) : string("Nully"),ArrayDb(n){}//强制转换函数
	Student(const string & s ,int n )
	:string(s),ArrayDb(n){}
	Student(const string & s ,const ArrayDb & a )
	:string(s),ArrayDb(a){}
	//当初始化列表包含多个项目时，这些项目被初始化的顺序为它们被
	//声明的顺序，而不是它们在初始化列表中的顺序
	Student(const char * str , const double *pd ,int n )
	:string(str),ArrayDb(pd,n){}

	~Student(){}
	double Average() const ;
	double & operator [](int i);
	double operator [] (int i ) const ;
	const string & Name() const ;


	friend std::istream & operator>>(std::istream & is ,
									 Student & stu);
	friend std::istream & getline(std::istream & is ,
									 Student & stu);
	friend std::ostream & operator<<(std::ostream & os ,
									const Student & stu);
};

#endif // STUDENTI_H_

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
