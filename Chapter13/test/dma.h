//Changed by Ghostxiu 2017/9/19
//原书程序清单13.14内容
//使用动态内存分配和友元的继承示例
#ifndef DMA_H_
#define DMA_H_
#include <iostream>
using std::ostream;
//基类baseDMA
class baseDMA{
private:
	char *label ;
	int rating ;

public:
	baseDMA(const char * l = "null" , int r = 0) ;
	baseDMA(const baseDMA & rs);
	virtual ~baseDMA();
	baseDMA & operator=(const baseDMA & rs);
	friend ostream & operator<<(ostream &os , const baseDMA &rs);
};

//派生类lacksDMA
class lacksDMA:public baseDMA{
private:
	enum {COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char * c = "blank" , const char * l = "null" ,int r = 0);
	lacksDMA(const char *c ,const baseDMA &rs);
	friend ostream &operator<<(ostream & os ,const lacksDMA &ls);
	//由于派生类lacksDMA没有使用动态内存
	//所以可以使用默认的析构函数、赋值构造函数、重载赋值运算符
};

//派生类hasDMA
class hasDMA:public baseDMA{
private:
	char * style ;
public:
	hasDMA(const char * s = "none" , const char *l = "null"
			, int r = 0 );
	hasDMA(const char * s ,const baseDMA &rs);
	hasDMA(const hasDMA & hs);
	~hasDMA();
	hasDMA & operator=(const hasDMA & hs);
	friend ostream & operator<<(ostream & os
								, const hasDMA & rs);

};
#endif // DMA_H_

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13/test
