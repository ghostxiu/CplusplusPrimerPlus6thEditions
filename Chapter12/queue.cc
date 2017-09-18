//Changed by Ghostxiu 2017/9/18
//Include queue.h queue的实现文件
#include "queue.h"
//注意此处使用""将调用自己的头文件，否则则搜索系统目录
#include <cstdlib>
#include <iostream>
using std::rand;


//Queue 类方法

Queue::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
}

Queue::~Queue()
{
    Node * temp;
    while(front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isempty(void) const
{
    return items == 0;
}

bool Queue::isfull(void) const
{
    return items == qsize;
}

int Queue::queuecount(void) const
{
    return items;
}

bool Queue::enqueue(const Item & item)
{
    if(isfull())
    {
        return false;
    }
    Node * add = new Node;  //create node

    add->item = item;       //set node pointers
    add->next = NULL;
    items++;

    if(front == NULL)    //if queue is empty
    {
        front = add;
    }
    else                    //else placr at rear
    {
        rear->next = add;
    }
    rear = add;
    return true;
}

bool Queue::dequeue(Item & item)
{
    if(front == NULL)
    {
        return false;
    }
    item = front->item;     //set item to first item in queue
    items--;

    Node * temp = front;    //save location of first item
    front = front->next;    //reset front to next item
    delete temp;            //delete former first item

    if(items == 0)
    {
        rear = NULL;
    }
    return true;
}

void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}





//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12
