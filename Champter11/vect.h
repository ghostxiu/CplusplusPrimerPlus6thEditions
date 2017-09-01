#ifndef VECT_H_
#define VECT_H_
#include<iostream>
class Vector{
public:
	enum Mode{RECT,POL};
private:
	double x ;
	double y ;
	double mag;
	double ang;
	void set_x();
	void set_y();
	void set_mag();
	void set_ang();
	Mode mode;
public:
	double xval() const {return x ;}
	double yval() const {return y ;}
	double magval() const {return mag ;}
	double angval() const {return ang ;}
	Vector();
	Vector(double x1,double x2 ,Mode form = RECT);
	void reset(double x1,double x2 ,Mode form = RECT);
	~Vector();
	void polar_mode();
	void rect_mode();
	//重载 + - * -号
	Vector operator+(const Vector & v);
	Vector operator-(const Vector & v);
	Vector operator*( double n);
	Vector operator-();
	//友元函数
	friend Vector operator*(double n, const Vector & v);
	friend std::ostream & operator<<(std::ostream & os ,const Vector &v);

};



#endif // VECT_H_
