//矢量测试文件，运算符重载，友元函数
//modify by ghostxiu 2017/9/1
#ifndef VECT_H_
#define VECT_H_
#include<iostream>
namespace VECTOR
{
	class Vector{
	public:
		enum Mode{RECT,POL};
		//RECT for rectangular mode,POL for Polar mode
	private:
		double x ; //直角坐标系横坐标
		double y ;//直角坐标系纵坐标
		double mag ;//vector 的距离
		double ang ;//vector 的角度
		Mode mode;//RECT  or POL
	//private set methods
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:
		Vector();
		Vector(double x1 ,double x2 ,Mode form = RECT);
		~Vector();
		void reset(double x1 ,double x2 ,Mode form = RECT);
		//内联的常数函数，返回x,y,mag,ang的值
		double xval()const {return x ;}
		double yval()const {return y;}
		double magval() const{return mag;}
		double angval() const{return ang;}
		void polar_mode();//set to polar mode
		void rect_mode();//set to rectangular mode
		//重载符号 + - * 和负号
		Vector operator+(const Vector & v ) const ;
		Vector operator-(const Vector & v ) const ;
		Vector operator*(double b) const;
		Vector operator-() const ;
		//operator double() const;//转换函数
		explicit operator double() const;//显式转换
		//友元函数 置换 *号位置和重载<<
		friend Vector operator*(double x , const Vector & v);
		friend std::ostream & operator<<(std::ostream & os ,const Vector &v);

	};

}//end namespace VECTOR

#endif // VECT_H_
