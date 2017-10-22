//Changed by Ghostxiu 2017/10/22
//编程练习3
#ifndef QUEUETP_H_
#define QUEUETP_H_
#include <string>
using std::string;


//类Worker
class Worker{
private:
	string fullname ;
	long id ;
protected:
	virtual void Data() const ;//使用保护继承避免二义性
	virtual void Get();
public:
	Worker() :fullname("no one"),id(0L){}
	Worker(const string & s ,long n ) :
		fullname(s),id(n){}
	virtual ~Worker() = 0 ;
	virtual void Set() = 0 ;
	virtual void Show() const = 0 ;

};

//使用MI必须使用虚基类
//虚基类使得从多个类（基类相同）派生出的对象只继承一个基类对象
class Waiter : virtual public Worker
{
private:
	int panache;
protected:
	virtual void Data() const ;//使用保护继承避免二义性
	virtual void Get();
public:
	Waiter() :Worker(),panache(0) {}
	Waiter(const string & s ,long n ,int v = 0) :
		 Worker(s,n),panache(v) {}
	Waiter(const Worker & wk , int v = 0) :
		 Worker(wk),panache(v) {}
	void Set();
	void Show() const ;
};

class Singer : virtual public Worker
{
protected:
	enum{other ,alto,contralto,soprano,
	bass,baritone,tenor};
	enum {Vtypes = 7};
	virtual void Data() const ;//使用保护继承避免二义性
	virtual void Get();
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

class SingingWaiter : public Singer , public Waiter
{
protected:
	virtual void Data() const ;//使用保护继承避免二义性
	virtual void Get();
public:
	SingingWaiter(){}
	SingingWaiter( const string & s ,long n , int p = 0
				, int v = other )
		:Worker(s,n),Waiter(s,n,p),Singer(s,n,v){}
	SingingWaiter( const Worker & wk , int p = 0
				, int v = other )
		:Worker(wk),Waiter(wk,p),Singer(wk,v){}
	SingingWaiter( const Singer & sg , int p = 0  )
		:Worker(sg),Waiter(sg,p),Singer(sg){}
	SingingWaiter( const Waiter & wt , int v = other )
		:Worker(wt),Waiter(wt),Singer(wt,v){}
	void Set();
	void Show() const ;
};

//以上内容来自https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/blob/master/Chapter14/test/workermi.h
//以下内容来自https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/blob/master/Chapter15/test/queuetp.h
template<class T>
class QueueTp{
private:
	enum {MAX = 10};
	class Node
	{
	public:
		T item ;
		Node * next ;
		Node(const  T & it ) : item(it) ,next (nullptr) {}
	};
	int items ;
	Node * rear ;
	Node * front ;
	const int qsize ;
	QueueTp(const QueueTp & q) : qsize(0){}
	QueueTp & operator= ( const QueueTp & q) { return *this;}
public:
	QueueTp(int qs = MAX);
	~QueueTp();
	bool isempty() const { return items == 0 ; }
	bool isfull() const {return items == qsize; }
	int queuecount ( ){return items ;}
	bool enqueue ( const  T & item);
	bool dequeue (T & item );

};

#endif // QUEUETP_H_
//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14
