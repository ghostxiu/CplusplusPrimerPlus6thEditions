#include"vect.h"
#include<cmath>
using std::cout ;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::sqrt;

const double Rad_to_deg = 45.0/atan(1.0);

void Vector::set_mag()
{
	mag = sqrt(x*x+y*y);
}
void Vector::set_ang()
{
	ang = atan2(y,x);
}
void Vector::set_x()
{
	x = mag*cos(ang);
}

void Vector::set_y()
{
	y = mag*sin(ang);
}

Vector::Vector()
{
	x = y = ang = mag = 0.0 ;
	mode = RECT;
}

Vector::Vector(double x1 ,double x2 ,Mode form)
{
	mode = form;
	if(form == RECT)
	{
		x = x1;
		y = x2 ;
		set_mag();
		set_ang();
	}
	else if (form == POL)
	{
		mag = x1 ;
		ang = x2/Rad_to_deg;
		set_x();
		set_y();
	}
	else
	{
		cout << "Incorrect 3rd item -- "
			 << "set to 0 \n";
		x = y = mag = ang = 0.0 ;
		mode = RECT;
	}
}
Vector::~Vector(){}

void Vector::reset(double x1 ,double x2 ,Mode form)
{
	mode = form;
	if(form == RECT)
	{
		x = x1;
		y = x2 ;
		set_mag();
		set_ang();
	}
	else if (form == POL)
	{
		mag = x1 ;
		ang = x2/Rad_to_deg;
		set_x();
		set_y();
	}
	else
	{
		cout << "Incorrect 3rd item -- "
			 << "set to 0 \n";
		x = y = mag = ang = 0.0 ;
		mode = RECT;
	}
}

void Vector::polar_mode()//set to polar mode
{
	mode = POL;
}
void Vector::rect_mode()//set to rectangular mode
{
	mode = RECT;
}
//重载符号 + - * 和负号
Vector Vector::operator+(const Vector & v )
{
	return Vector(x+v.x,y+v.y);
}
Vector Vector::operator-(const Vector & v )
{
	return Vector(x-v.x,y-v.y);
}
Vector Vector::operator*(double b)
{
	return Vector(x*b,y*b);
}
Vector Vector::operator-()
{
	return Vector(-x,-y);
}
//友元函数 置换 *号位置和重载<<
Vector operator*(double x , const Vector & v)
{
	return x * v ;
}
std::ostream & operator<<(std::ostream & os ,const Vector &v)
{
	if(v.mode == Vector::RECT)
	{
		os << "(x,y) = (" <<v.x << ","<<v.y<<")\n";
	}
	else if (v.mode == Vector::POL)
	{
		os <<"(m,a) = (" << v.mag<< ","<<v.ang/Rad_to_deg<<")\n";
	}
	else
	{
		os << "Invaild style!\n";
	}
	return os ;
}

