//Modify by ghostxiu 2017/9/1
#ifndef STONEWT_H_
#define STONEWT_H_
#include<iostream>
using std::ostream;
class Stonewt{
public:
	enum Mode{ST,INT,FLOT};
	static const int Lbs_per_stn  = 14;
	//增加状态成员来确定使用英石格式,整数格式还是浮点数格式
private:
	int stone ;
	double pds_left;
	double pounds;
	Mode mode;
public:
	explicit Stonewt(double p,Mode from = FLOT);
	Stonewt();
	explicit Stonewt(int s,double t,Mode from = ST);
	~Stonewt();
	//重载符号
	Stonewt operator+(const Stonewt &s);
	Stonewt operator-(const Stonewt &s);
	Stonewt operator*(double b);
	//重载关系运算符
	bool operator>(const Stonewt &s);
	bool operator<(const Stonewt &s);
	bool operator==(const Stonewt &s);
	bool operator!=(const Stonewt &s);
	bool operator>=(const Stonewt &s);
	bool operator<=(const Stonewt &s);
	//转换函数
	//operator int() const ;
	//operator double() const ;
	//下面只支持显式转换
	explicit operator int() const;
	explicit operator double() const ;
	//友元
	friend ostream & operator<<(ostream & os , const Stonewt & s);
	friend bool operator>=(const Stonewt & s,double b);
	friend bool operator>(const Stonewt & s,double b);
	friend bool operator<(const Stonewt & s,double b);

};
#endif // STONEWT_H_
