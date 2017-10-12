//Changed by Ghostxiu 2017/10/10
//原书程序清单14.13 内容 类模板
#ifndef STACKTP_H_

template<typename T>
class Stack{
private:
	enum {MAX = 10 };
	T items[MAX];
	int top ;
public:
	Stack();
	bool isempty();
	bool isfull();
	bool push(const T & item);
	bool pop(T & item);
};

template <class T>
Stack<T>::Stack()
{
	top = 0 ;

}

template <class T>
bool Stack<T> :: isempty()
{
	return top == 0 ;
}

template <class T>
bool Stack<T> :: isfull()
{
	return top == MAX ;
}

template <class T>
bool Stack<T> :: push( const T & item)
{
	if ( top < MAX)
	{
		items[top++] = item ;
		return true ;
	}
	else
	{
		return false ;
	}
}

template <class T>
bool Stack<T> :: pop( T & item)
{
	if(top > 0)
	{
		item = items[--top];
		return true ;
	}
	else
		return false;
}

#define STACKTP_H_
#endif // STACKTP_H_
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
