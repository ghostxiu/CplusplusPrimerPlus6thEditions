//Changed by Ghostxiu 2017/10/22
//原书程序清单15.10 内容
//中断
//将对象当作异常类型
#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_
#include <iostream>
class bad_hmean
{
private:
	double v1 ;
	double v2 ;
public:
	bad_hmean( double a , double b) : v1(a) , v2(b){}
	void mesg();
};

void bad_hmean::mesg()
{
	std::cout << "hmean( " << v1 << "," << v2 << " ): "
			  << "invaild arguments: a = -b \n";
}

class bad_gmean
{
public:
	double v1 ;
	double v2 ;
	bad_gmean( double a , double b) : v1(a) , v2(b){}
	const char * mesg();
};

inline const char * bad_gmean::mesg()
{
	return "gmean() arguments should be >= 0.\n";
}

#endif // EXC_MEAN_H_


//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
