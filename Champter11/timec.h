//本程序用来测试运算符重载和友元，包括 timefriend.cc,time.cc,time.h
#ifndef TIMEC_H_
#define TIMEC_H_
#include<iostream>
class Time{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h , int m);
	//构造函数
	void add_hour(int &h);//小时增加
	void add_min(int& m);//分钟增加
	void show() const;//输出时间
	void reset_time(int h = 0,int m = 0 );
	Time sum(const Time & t) const ;
	friend Time operator+(const Time & t1,const Time & t2);
	friend Time operator-(const Time & t1,const Time & t2);
	friend Time operator*(double mul , const Time & t);//乘以一个时间因子
	friend Time operator*( const Time & t,double mul);//乘以一个时间因子
	friend std::ostream & operator<<(std::ostream & os ,const Time & t);
	~Time();//析构函数
	//friend Time operator*(double m , const Time & t);
	//友元函数，更换了二元运算符两边参数的位置,注释的原因是可以用非友元函数所替代

};
#endif // TIMEC_H_
