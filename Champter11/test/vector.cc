//矢量测试文件，运算符重载，友元函数
//modify by ghostxiu 2017/9/1
#include"vect.h"
#include<cmath>

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;//atan更稳定的形式，两者调用方法略有不同
using std::cout;

namespace VECTOR
{
	//compute degrees in one radian
	const double Rad_to_deg = 45.0/atan(1.0);
	//should be 57.29577957795130823

	//private methods
	//explicit 只需要在函数声明时候加上，定义时候不需要写
	Vector::operator double () const
	{
		return mag;
	}

	void Vector::set_mag()
	{
		mag = sqrt(x*x+y*y);
	}
	void Vector::set_ang()
	{
		if( x == 0 && y == 0)
		{
			ang = 0.0;
		}
		else
			ang = atan2(y,x);
	}

	void Vector::set_x()
	{
		x = mag * cos(ang);
	}
	void Vector::set_y()
	{
		y = mag * sin(ang);
	}

	//public methods
	//常规构造函数
	Vector::Vector()
	{
		x = y = mag = ang = 0.0 ;
		mode = RECT;
	}
	//重载构造函数
	Vector::Vector(double x1 ,double x2 ,Mode form)
	{
		mode = form ;
		if (form == RECT)
		{
			this -> x = x1 ;
			this -> y = x2 ;
			set_mag();
			set_ang();
		}
		else if(form == POL)
		{
			mag = x1 ;
			ang = x2 /Rad_to_deg;
			set_x();
			set_y();

		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() --";
			cout << "Vector set to 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	Vector::~Vector()
	{
		//析构函数
		//cout << "Memory is Freeing!\n";
	}

	//重新设定vector的值，不用创建临时变量
	void Vector::reset(double x1 ,double x2 ,Mode form)
	{
		mode = form ;
		if (form == RECT)
		{
			x = x1 ;
			y = x2 ;
			set_mag();
			set_ang();
		}
		else if(form == POL)
		{
			mag = x1 ;
			ang = x2 /Rad_to_deg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() --";
			cout << "Vector set to 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	//内联的常数函数，返回x,y,mag,ang的值
	void Vector::polar_mode()//set to polar mode
	{
		mode = POL;
	}
	void Vector::rect_mode()//set to rectangular mode
	{
		mode = RECT;
	}

	//重载符号 + - * 和负号
	Vector Vector::operator+(const Vector & v ) const
	{
		return Vector(x + v.x ,y + v.y);
	}

	Vector Vector::operator-(const Vector & v ) const
	{
		return Vector(x - v.x ,y - v.y);
	}

	Vector Vector::operator*(double b) const
	{
		return Vector(x*b,y*b);
	}

	Vector Vector::operator-() const
	{
		return Vector(-x,-y);
	}

	//友元函数 置换 *号位置和重载<<
	Vector operator*(double x , const Vector & v)
	{
		return x *v;
	}

	std::ostream & operator<<(std::ostream & os ,const Vector &v)
	{
		if(v.mode == Vector::RECT)
		{
			os << "(x,y)  = (" << v.x << ',' << v.y <<")\n";
		}
		else if(v.mode == Vector::POL)
		{
			os << "(m,a)  = ("<< v.mag << ','
				<< v.ang *Rad_to_deg<<")\n";
		}
		return os ;
	}

}
