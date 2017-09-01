//本程序用来测试运算符重载和友元，包括 timefriend.cc,time.cc,time.h
#include"timec.h"
#include<iostream>
Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int  h ,int  m)
{
	hours = h;
	minutes = m ;
}

void Time::reset_time(int  h ,int  m)
{
	hours = h;
	minutes = m ;
}

void Time::add_hour(int &h)
{
	hours += h ;
}

void Time::add_min(int &m)
{
	minutes += m;
	hours += minutes / 60 ;
	minutes %= 60;
}

void Time::show() const
{
	std::cout << hours << ":" <<minutes<<std::endl;
}

Time Time::sum(const Time & t) const
{
	Time tp;
	tp.minutes = minutes + t.minutes;
	tp.hours = hours + t.hours + tp.minutes/60;
	tp.minutes = tp.minutes%60;
	return tp;
}

//使用友元函数重载运算符+
Time operator+(const Time &t1,const Time &t2)
{
	Time tp ;
	tp.minutes = t1.minutes + t2.minutes;
	tp.hours = t1.hours + t2.hours + tp.minutes/60;
	tp.minutes = tp.minutes%60;
	return tp;
}
//使用友元函重载运算符-
Time operator-(const Time & t1,const Time & t2)
{
	Time tp;
	int total_minutes = (t1.minutes + t1.hours * 60) - (t1.minutes + t1.hours * 60);
	tp.hours = total_minutes / 60 ;
	tp.minutes = total_minutes % 60 ;
	return tp ;
}


Time::~Time()
{
	//std::cout <<"\n\n\nMemory is freeing!\n";
}

Time operator*(double mul , const Time & t)
{
	Time tp;
	int total_minutes = (t.minutes + t.hours * 60) * mul ;
	tp.hours = total_minutes / 60 ;
	tp.minutes = total_minutes % 60 ;
	return tp ;
}
Time operator*( const Time & t,double mul)
{
	Time tp;
	int total_minutes = (t.minutes + t.hours * 60) * mul ;
	tp.hours = total_minutes / 60 ;
	tp.minutes = total_minutes % 60 ;
	return tp ;
}

std::ostream & operator<<(std::ostream & os ,const Time & t)
{
	os << t.hours << ":" <<t.minutes<<"\n";

	return os;
	//返回ostream的引用
}
