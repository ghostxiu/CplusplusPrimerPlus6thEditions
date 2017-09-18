//Changed by Ghostxiu 2017/9/18
#ifndef _QUEUE_H_
#define  _QUEUE_H_
class Customer{
private:
	long arrive;
	int processtime;
public:
	Customer(){arrive = processtime = 0 ;}

	void set(long when);
	long when() const {return arrive;}
	int ptime() const {return processtime;}
};

typedef Customer Item ;

class Queue{
private:
	struct Node {Item item ; struct Node * next;};
	enum{Q_SIZE = 10 };
	Node *front ;
	Node *rear;
	int items ;
	const int qsize;
	//避免广泛使用带来错误
	Queue(const Queue & q):qsize(0){}//常量的初始化（qsize）
	Queue & operator=(const Queue  & q){ return *this;}//重载赋值
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const Item & item);
	bool dequeue(Item & item);

};




#endif // _QUEUE_H_
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12
