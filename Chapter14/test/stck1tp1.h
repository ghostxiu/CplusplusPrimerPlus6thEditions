//Changed by Ghostxiu 2017/10/11
//原书程序清单14.15 内容
//模版指针栈(正确的使用方法是需要申请和释放空间)
#ifndef STCK1TP1_H_
#define STCK1TP1_H_

template<class T>
class Stack{
private:
	enum {SIZE = 10};
	int stacksize ;
	T * items ;
	int top ;
public:
	explicit Stack(int ss = SIZE);
	Stack(const Stack & st);
	~Stack(){delete [] items;}
	bool isempty(){return top == 0;}
	bool isfull(){return top == stacksize;}
	bool push (const T & item );
	bool pop (T & item);
	Stack & operator=(const Stack & st );
};



//定义
template <class T>
Stack<T>::Stack(int ss ) : stacksize(ss),top(0)
{
	items = new T [stacksize];
}

template <class T>
Stack<T>::Stack(const Stack & st )
{
	stacksize = st.stacksize ;
	top = st.top ;
	items = new T[stacksize];
	for(int i = 0 ; i < top ; ++i)
	{
		items[top++] = st.items[top++];

	}
}

template <class T>
bool Stack<T>::push(const T & item)
{
	if(top < stacksize)
	{
		items[top++] = item;
		return true ;
	}
	else
		return false ;
}

template <class T>
bool Stack<T>::pop(T & item)
{
	if(top > 0)
	{
		item = items[--top];
		return true ;
	}
	else
	{
		return false ;
	}
}

template <class T>
Stack<T> & Stack<T>::operator=(const Stack<T> & st)
{
	if(this == &st)
		return *this ;
	delete [] items ;

	stacksize = st.stacksize ;
	top = st.top ;
	items = new T[stacksize];
	for(int i = 0 ; i < top ; ++i)
	{
		items[top++] = st.items[top++];

	}
	return *this ;
}
#endif // STCKTP1_H_
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test

