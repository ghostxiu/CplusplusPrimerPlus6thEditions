//Changed by Ghostxiu 2018/1/18
//原書程序清單18.6內容
//包装器
//callable.h的头文件
#include <iostream>
#include <functional>
template <typename T, typename F>
T use_f(T v , F f)
{
	static int count  = 0 ;
	count++;
	std::cout<< "use_f count = " << count << ", &count = " << &count << ".\n";
	return f(v);
}

template <typename T >
T use_f1(T v ,std::function<T(T)> f)
{
	static int count  = 0 ;
	count++;
	std::cout<< "use_f count = " << count << ", &count = " << &count << ".\n";
	return f(v);
}

class Fp{
private:
	double z_ ;
public:
	Fp(double z = 1.0) : z_(z){}
	operator()(double p) { return z_ *  p ;}
 };

class Fb{
private:
	double y_ ;
public:
	Fb(double y = 1.0) : y_(y){}
	operator()(double q) { return y_ +  q ;}
 };
//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter18/test
