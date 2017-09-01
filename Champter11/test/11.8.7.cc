//Vector 类使用转换函数
//包括vector.cc vect.h
//modify by ghostxiu 2017/9/1
#include"vector.cc"
using namespace VECTOR;
using std::endl;
int main()
{
	Vector a(2,3.5);
	cout << "Vector a:" << a << endl;
	//double a_length = a;
	double a_length = double(a);
	cout <<"a length = " << a_length << endl ;

	return 0;
}
