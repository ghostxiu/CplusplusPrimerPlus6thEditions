//Changed by Ghostxiu 2017/10/11
//原书程序清单14.17 内容
//数组模板示例 模版的非类型参数
#ifndef ARRAYTP_H_
#define ARRAYTP_H_

#include <iostream>
#include <cstdlib>
//模版也可以引入非类型参数
template <class T,int n >
class ArrayTP{
private:
	T ar[n];
public:
	ArrayTP(){};
	explicit ArrayTP(const T & v);
	virtual T & operator [] (int i);
	virtual T operator[] (int i) const ;

};

//类实现

//复制构造函数
template <class T, int n >
ArrayTP<T,n>::ArrayTP(const T & v)
{
	for(int i = 0 ; i < n ; ++i)
	{
		ar[i] = v ;
	}
}


template <class T , int n >
T & ArrayTP<T,n>::operator[](int i)
{
	if( i  < 0 || i >= n )
	{
		std::cerr << "Error in array limits: " << i
				 << " is out of range\n";
		std::exit(EXIT_FAILURE);
	}
	return ar[i];
}

template <class T ,int n >
T ArrayTP<T,n>::operator[](int i) const
{
	if( i < 0 || i >= n)
	{
		std::cerr << "Error in array limits: " << i
				<<"is out of range\n";
		std::exit(EXIT_FAILURE);
	}
	return ar[i];
}
#endif // ARRAYTP_H_
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
