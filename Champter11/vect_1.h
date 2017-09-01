#ifndef VECT_1_H_
#define VECT_1_H_
#include<iostream>
class Vector{
private:
	double x ;
	double y ;
public:
	double xval() const {return x ;}
	double yval() const {return y ;}
	double magval();
	double angval();
	Vector();
	Vector(double x1,double x2 );
	void reset(double x1,double x2 );
	~Vector();
	//重载 + - * -号
	Vector operator+(const Vector & v);
	Vector operator-(const Vector & v);
	Vector operator*( double n);
	Vector operator-();
	//友元函数
	friend Vector operator*(double n, const Vector & v);
	friend std::ostream & operator<<(std::ostream & os ,const Vector &v);
};



#endif // VECT_1_H_
