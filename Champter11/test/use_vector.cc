//矢量测试文件，运算符重载，友元函数
//包括vect.h、use_vector.cc和vector.cc三个文件
//by ghostxiu 2017/8/31

//程序入口
#include"vector.cc"

using namespace VECTOR;
int main()
{
	using std::cout;
	using std::endl;

	cout << "Now set up v1,v2,v3 and a blank v4 :\n";
	Vector v1(3,4);
	Vector v2(3.4,6.2);
	Vector v3(10,60,Vector::POL);
	Vector v4;

	cout << "\n\nv1  :";
	cout << v1;

	cout << "\n\nv1 + v2 :";
	cout << v1+v2;

	cout << "v1 - v2 :";
	cout << v1-v2;

	cout << "-v1:";
	cout << -v1 ;

	v1.polar_mode();//change v1 to polar mode
	cout << "\n\npolar v1 :";
	cout << v1 ;
	cout <<"v1.x = " << v1.xval()
		 <<",v1.y = " << v1.yval() <<endl
		 <<"v1.mag = " << v1.magval()
		 <<",v1.ang = " << v1.angval() <<endl;

	cout << "\n\n\nNow reset v4 use reset() method:";
	v4.reset(12.0,45.0,Vector::POL);
	cout << v4;

	cout << "Now reset v4 without use reset() method:";
	v4 = Vector(12,60,Vector::POL);
	cout << v4 ;

	cout << "\n\n\n...end...\n";
	return 0 ;
}
