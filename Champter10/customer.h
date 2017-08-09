#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_
const int Len = 35 ;
struct customer{
	char fullname[Len];
	double payment;
};

typedef customer CR;

//使用数组模拟一个栈
class Stack{
private:
	const int Max = 10  ;
	int top ;
	CR *client = new CR[Max];
public:
	Stack();
	bool isfull() const;
	bool isempty() const;

	bool push(const CR & cr);
	bool pop(CR & cr);
	~Stack();
};
#endif // _CUSTOMER_H_
