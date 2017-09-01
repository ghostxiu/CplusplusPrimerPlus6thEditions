//Modify by ghostxiu 2017/9/1
#include"stonewt.h"
#include<iostream>
using std::cout;
using std::endl;
Stonewt::Stonewt(double p,Mode form)
{
	mode = form ;
	pounds = p ;
	stone = int(pounds) / Lbs_per_stn;
	pds_left =  int(pounds) % Lbs_per_stn - int(p) + p ;
}
Stonewt::Stonewt()
{
	mode = FLOT ;
	pounds = pds_left = stone = 0 ;
}

Stonewt::Stonewt(int s,double p,Mode form)
{
	mode = form ;
	stone = s ;
	pds_left = p;
	pounds = double(stone*Lbs_per_stn) + pds_left ;
}

Stonewt::~Stonewt()
{

}
//重载符号
Stonewt Stonewt::operator+(const Stonewt &s)
{
	Stonewt st(this->pounds+s.pounds);
	return st;
}
Stonewt Stonewt::operator-(const Stonewt &s)
{
	Stonewt st(this->pounds-s.pounds);
	return st;
}

Stonewt Stonewt::operator*(double b)
{
	Stonewt st(this->pounds*b);
	return st;
}
	//转换函数
Stonewt::operator int() const
{
	return int(pounds);
}
Stonewt::operator double() const
{
	return pounds;
}
	//友元
ostream & operator<<(ostream & os , const Stonewt & s)
{
	if(s.mode == Stonewt::ST)
	{
		cout << s.stone << " stone , " << s.pds_left << "pounds.\n";
	}
	else if (s.mode == Stonewt::INT)
	{
		cout << "pounds for int size : " << int(s.pounds+0.5) << endl;
	}
	else
	{
		cout << "all " << s.pounds << " pounds.\n";
	}
}

//重载关系运算符
bool Stonewt::operator>(const Stonewt &s)
{
	bool st ;
	st = this->pounds > s.pounds ? true: false;
	return st;
}
bool Stonewt::operator<(const Stonewt &s)
{
	bool st ;
	st = this->pounds < s.pounds ? true: false;
	return st;
}

bool Stonewt::operator==(const Stonewt &s)
{
	bool st ;
	st = this->pounds == s.pounds ? true: false;
	return st;
}

bool Stonewt::operator!=(const Stonewt &s)
{
	bool st ;
	st = this->pounds != s.pounds ? true: false;
	return st;
}

bool Stonewt::operator>=(const Stonewt &s)
{
	bool st ;
	st = this->pounds >= s.pounds ? true: false;
	return st;
}

bool Stonewt::operator<=(const Stonewt &s)
{
	bool st ;
	st = this->pounds <= s.pounds ? true: false;
	return st;
}

bool operator>=(const Stonewt & s,double b)
{
	bool st ;
	st = s.pounds >= b ? true: false;
	return st;
}


bool operator>(const Stonewt & s,double b)
{
	bool st ;
	st = s.pounds > b ? true: false;
	return st;
}

bool operator<(const Stonewt & s,double b)
{
	bool st ;
	st = s.pounds < b ? true: false;
	return st;
}
