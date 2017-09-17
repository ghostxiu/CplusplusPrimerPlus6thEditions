//Changed by Ghostxiu 2017/9/17
typedef unsigned long Item ;

class Stack{
private:
	enum { MAX = 10 };
	Item * pitems ;
	int size ;
	int top ;
public:
	Stack(int n = MAX);
	Stack(const Stack & st);
	~Stack();
	bool isempty();
	bool isfull();
	bool push(const Item & item);
	bool pop(Item & item);
	Stack & operator=(const Stack & st);

};
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12/
