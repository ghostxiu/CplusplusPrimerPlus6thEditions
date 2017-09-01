#include"vect_1.h"
#include<cmath>
using std::cout ;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::sqrt;

const double Rad_to_deg = 45.0/atan(1.0);


double Vector::magval()
{
	return sqrt(x*x+y*y);
}
double Vector::angval()
{
	return atan2(y,x);
}


Vector::Vector()
{
	x = y = 0.0 ;
}

Vector::Vector(double x1 ,double x2)
{
	x = x1;
	y = x2 ;
}
Vector::~Vector(){}

void Vector::reset(double x1 ,double x2)
{
	x = x1;
	y = x2 ;
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
	os << "(x,y) = (" <<v.x << ","<<v.y<<")\n";
	return os ;
}

