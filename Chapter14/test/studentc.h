//Changed by Ghostxiu 2017/9/15
//原书程序清单14.1内容 has-a 继承
#ifndef STUDENTC_H_
#define STUDENTC_H_


#include <iostream>
#include <string>
#include <valarray>

class Student{
private:
	typedef std::valarray<double> ArrDb ;
	std::string name;
	ArrDb scores ;
	std::ostream & arr_out(std::ostream &os) const ;
public:
	//构造函数
	Student() : name("Null Student"),scores(){}
	explicit Student(const std::string & s ) :
		name(s),scores(){}
	explicit Student(int n ) :name("Null name ") ,scores(n){}
	Student(const std::string & s , const ArrDb & a)
	:name(s) ,scores(a){}
	Student(const std::string & s , int n)
	:name(s) ,scores(n){}
	Student(const char * str ,const double *pd ,int n ) :
		name(str) , scores(pd,n){}
	//析构函数
	~Student(){}
	//成员函数
	double Average() const ;
	const std::string &Name () const ;
	double & operator[] (int i );
	double  operator[] (int i ) const;
	//友元函数
	friend std::istream & operator>>( std::istream & is , Student & stu);
	friend std::istream & getline( std::istream & is , Student & stu);
	friend std::ostream & operator<<( std::ostream & os , Student & stu);
};
#endif

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
