//Changed by Ghostxiu 2017/9/24
//第十三章 编程练习四
#ifndef PORT_H_
#define PORT_H_
#include <iostream>
const int NUM = 4;
using std::ostream;
//基类Port
class Port
{
private:
	char * brand;
	char style[20];
	int bottles ;
public:
	Port(const char * br = "none" , const char * st = "none" , int b = 0) ;
	Port(const Port &p);
	virtual ~Port() {delete [] brand; }
	Port & operator= (const Port & p);
	Port & operator+=(int b);
	Port & operator-=(int b);
	int bottlesCount() const {return bottles;}
	virtual void show() const ;
	friend ostream & operator << (ostream &os , const Port & p);
};


//派生类VintagePort

class VintagePort : public Port
{
private:
	char *nickname ;
	int year ;
public:
	VintagePort();
	VintagePort(const char * br , int b , const char *nn ,int y);
	VintagePort(const VintagePort & vp) ;
	~VintagePort(){delete [] nickname ;}
	VintagePort & operator=(const VintagePort & vp);
	void show() const;
	friend ostream & operator<<(ostream & os , const VintagePort & vp);
};
#endif // PORT_H_
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13
