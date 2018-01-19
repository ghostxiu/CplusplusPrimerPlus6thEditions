//Changed by Ghostxiu 2018/1/18
//原書程序清單18.7內容
//包装器
//使用包装器来使用 函数、函数符和lambda表达式
#include "somedefs.h"
//use_f在此函数中被实例化了5次，所以效率很低

double dub(double x) {return x*2.0;}
double square(double x){return x*x;}

int main()
{
	using namespace std ;
	double y = 1.21;
	cout << "Function pointer dub:\n";
	cout << "  " << use_f(y,dub) << endl ;
	cout << "Function pointer square:\n";
	cout << "  " << use_f(y,square) << endl ;

	cout << "Function object Fp:\n" ;
	cout << "  " << use_f(y,Fp(5.0)) << endl ;
	cout << "Function object Fb:\n" ;
	cout << "  " << use_f(y,Fb(5.0)) << endl ;

	cout << "Function expression 1:\n" ;
	cout << "  " << use_f(y,[](double u){return u*u;}) << endl ;
	cout << "Function expression 2:\n" ;
	cout << "  " << use_f(y,[](double u){return u+u/2.0;}) << endl ;

	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter18/test
