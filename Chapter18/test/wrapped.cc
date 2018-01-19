//Changed by Ghostxiu 2018/1/18
//原書程序清單18.8內容
//包装器
//使用function包装器优化文件callable.cc 使use_f只生成一个实例
#include "somedefs.h"


double dub(double x) {return x*2.0;}
double square(double x){return x*x;}

int main()
{
	using namespace std ;
	double y = 1.21;
	/*
	function<double(double)> ef1 = dub;
	function<double(double)> ef2 = square;
	function<double(double)> ef3 = Fp(10.0);
	function<double(double)> ef4 = Fb(10.0);
	function<double(double)> ef5 = [](double u ) {return u*u;};
	function<double(double)> ef6 = [](double u ) {return u+u/2.0;};
	*/
	function<double(double)> ef;
	cout << "Function pointer dub:\n";
	//cout << "  " << use_f(y,ef1)) << endl ;
	//cout << "  " << use_f(y,ef(dub)) << endl ;
	cout << "  " << use_f1<double>(y,dub) << endl ;
	cout << "Function pointer square:\n";
	//cout << "  " << use_f(y,ef2) << endl ;
	//cout << "  " << use_f(y,ef(square)) << endl ;
	cout << "  " << use_f1<double>(y,square) << endl ;

	cout << "Function object Fp:\n" ;
	//cout << "  " << use_f(y,ef3) << endl ;
	//cout << "  " << use_f(y,ef(Fp(10.0))) << endl ;
	cout << "  " << use_f1<double>(y,Fp(10.0)) << endl ;
	cout << "Function object Fb:\n" ;
	//cout << "  " << use_f(y,ef4) << endl ;
	//cout << "  " << use_f(y,ef(Fb(10.0))) << endl ;
	cout << "  " << use_f1<double>(y,Fb(10.0)) << endl ;

	cout << "Function expression 1:\n" ;
	//cout << "  " << use_f(y,ef5) << endl ;
	//cout << "  " << use_f(y,ef( [](double u ) {return u*u;})) << endl ;
	cout << "  " << use_f1<double>(y,[](double u ) {return u*u;}) << endl ;
	cout << "Function expression 2:\n" ;
	//cout << "  " << use_f(y,ef6) << endl ;
	cout << "  " << use_f1<double>(y,[](double u ) {return u+u/2.0;}) << endl ;

	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter18/test
