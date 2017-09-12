//Changed by Ghostxiu 2017/9/11
//Include queue.h queue的实现文件
#include "queue.h"
//注意此处使用""将调用自己的头文件，否则则搜索系统目录
#include <cstdlib>
#include <iostream>
using std::rand;


//Queue 类方法
Queue::Queue(int qs): qsize(qs)
{
	front = rear = nullptr ;
	items  =  0 ;

}

Queue::~Queue()
{
	Node *temp;
	while( front != nullptr)
	{
		temp = front ;
		front = front -> next ;
		delete temp;
	}
}

bool Queue::isempty() const
{
	return items == 0;
}

bool Queue::isfull() const
{
	return items == qsize ;
}

int Queue::queuecount() const
{
	return items;
}

bool Queue::enqueue(const Item & item)
{
	if(isfull())
		return false;
	Node * add = new Node ;

	add -> item = item;
	add -> next = nullptr ;
	items++;
	if (front == nullptr)
	{
		front = add ;
	}
	else
	{
		rear -> next = add ;
	}
	rear = add ;
	return true ;

}

bool Queue::dequeue(Item & item)
{
	if (front  == nullptr)
	{
		return false ;
	}
	item = front -> item ;
	items--;
	Node * temp = front ;
	front = front -> next ;
	delete temp;
	if(items == 0)
	{
		rear = nullptr ;
	}
	return true ;

}

void Customer::set( long when)
{
	processtime = rand()%3 + 1;
	arrive = when ;

}





//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12/test
