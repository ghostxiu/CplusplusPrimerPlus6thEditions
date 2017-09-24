//Changed by Ghostxiu 2017/9/24
//修改自程序清单13.14 test/dma.h
//使用动态内存分配和友元的继承示例
#ifndef DMA1_H_
#define DMA1_H_
#include <iostream>
using std::ostream;
//基类dmaABC
class dmaABC{
private:
	char *label;
	int rating;
public:
	dmaABC(const char * l = "null" , int r = 0) ;
	dmaABC(const dmaABC & da);
	virtual ~dmaABC();
	virtual dmaABC & operator=(const dmaABC & rs) ;
	friend ostream & operator<<(ostream &os , const dmaABC &rs);
	virtual void show();
};

class baseDMA : public dmaABC{
public:
	baseDMA(const char * l = "null" , int r = 0):dmaABC(l,r){};
	baseDMA(const baseDMA & rs):dmaABC(rs){};
	virtual ~baseDMA(){};
	baseDMA & operator=(const baseDMA & rs);
	friend ostream & operator<<(ostream &os , const baseDMA &rs);
	void show();
};

//派生类lacksDMA
class lacksDMA:public dmaABC{
private:
	enum {COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char * c = "blank" , const char * l = "null" ,int r = 0);
	lacksDMA(const char *c ,const dmaABC &rs);
	void show();
	friend ostream &operator<<(ostream & os ,const lacksDMA &ls);
	//由于派生类lacksDMA没有使用动态内存
	//所以可以使用默认的析构函数、赋值构造函数、重载赋值运算符
};

//派生类hasDMA
class hasDMA:public dmaABC{
private:
	char * style ;
public:
	hasDMA(const char * s = "none" , const char *l = "null"
			, int r = 0 );
	hasDMA(const char * s ,const dmaABC &rs);
	hasDMA(const hasDMA & hs);
	void show();
	~hasDMA();
	hasDMA & operator=(const hasDMA & hs);
	friend ostream & operator<<(ostream & os
								, const hasDMA & rs);

};
#endif // DMA_H_

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13
