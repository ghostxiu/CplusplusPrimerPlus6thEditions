//Changed by Ghostxiu 2017/9/15
//原书程序清单14.7 内容 is-a 继承
//多重继承
#ifndef WORKER0_H_
#define WORKER0_H_

#include <string>

using std::string ;
using std::ostream ;
using std::istream ;

//抽象类 Worker
class Worker{
private:
	string fullname;
	long id ;
public:
	Worker() :fullname("no one"),id(0L){}
	Worker(const string & s ,long n ) :
		fullname(s),id(n){}
	virtual ~Worker() = 0 ;
	virtual void Set();
	virtual void Show() const ;
};


class Waiter : public Worker
{

private:
	int panache;
public:
	Waiter() :Worker(),panache(0) {}
	Waiter(const string & s ,long n ,int v = 0) :
		 Worker(s,n),panache(v) {}
	Waiter(const Worker & wk , int v = 0) :
		 Worker(wk),panache(v) {}
	void Set();
	void Show() const ;
};

class Singer : public Worker
{
protected:
	enum{other ,alto,contralto,soprano,
	bass,baritone,tenor};
	enum {Vtypes = 7};
private:
	static char *pv[Vtypes];
	int voice;
public:
	Singer() :Worker(),voice(other) {}
	Singer(const string & s ,long n ,int v = other) :
		 Worker(s,n),voice(v) {}
	Singer(const Worker & wk , int v = other) :
		 Worker(wk),voice(v) {}
	void Set();
	void Show() const ;
};
#endif // WORKER0_H_
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
