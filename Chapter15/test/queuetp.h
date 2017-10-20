﻿//Changed by Ghostxiu 2017/10/20
//原书程序清单15.5 内容
//嵌套模版
#ifndef QUEUETP_H_
#define QUEUETP_H_
template <class Item>
class QueueTP
{
private:
	enum {Q_SIZE = 10};
	class Node
	{
	public:
		Item item ;
		Node * next ;
		Node(const Item & i ) : item(i) , next(0) {}
	};
	int items;
	Node * front ;
	Node * rear ;
	const int qsize;
	QueueTP(const QueueTP & q ) : qsize(0){}
	QueueTP & operator= (const QueueTP  & q){return * this ;}
public:
	QueueTP(int qs = Q_SIZE);
	~QueueTP();
	bool isempty() const
	{
		return items == 0 ;
	}
	bool isfull() const
	{
		return items == qsize ;
	}
	int queuecount () const
	{
		return items ;
	}
	bool enqueue(const Item & item) ;
	bool dequeue(Item & item);
};


template <class Item>
QueueTP<Item>::QueueTP(int qs ) : qsize(qs)
{
	front = rear = nullptr;
	items = 0 ;
}

template <class Item>
QueueTP<Item>::~QueueTP()
{
	Node * temp;
	while ( front != nullptr )
	{
		temp = front ;
		front = front -> next ;
		delete temp ;
	}
}

template <class Item>
bool QueueTP<Item>::enqueue(const Item & item)
{
	if (isfull())
		return false ;
	Node * add = new Node(item);
	items++;
	if (front == nullptr )
		front = add ;
	else
		rear -> next = add ;
	rear = add ;
	return true ;
}


template <class Item>
bool QueueTP<Item>::dequeue(Item & item)
{
	if(front == nullptr )
		return false ;
	item = front -> item ;
	items-- ;
	Node * temp = front ;
	front = front -> next ;
	delete temp ;
	if(items == 0)
	{
		rear = 0 ;
	}
	return true ;
}

#endif // QUEUETP_H_
//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
