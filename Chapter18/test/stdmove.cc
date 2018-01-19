//Changed by Ghostxiu 2018/1/16
//原書程序清單18.3內容
//移动语义和右值引用
//std::move()

#include <iostream>
#include <utility>

using namespace std ;

class Useless
{
private:
	int n ;//元素个数
	char * pc ;//数据指针
	static int ct ;//对象数量
	void ShowObject() const ;//显示工程
public:
	Useless();//默认构造函数
	explicit Useless(int k);
	Useless(int k , char ch );
	Useless(const Useless & f);//复制构造函数
	Useless(Useless && f) ;//移动构造函数
	~Useless();
	Useless operator +(const Useless & f) const ;
	Useless & operator =(const Useless & f) ;//赋值运算符
	Useless & operator =(Useless && f);//移动复制运算符，因为修改了源值，所以不能用const
	void ShowData() const;//显示数据
};

int Useless::ct = 0 ;

Useless::Useless()
{
	++ct ;
	n = 0 ;
	pc = nullptr ;
	cout << "Default constractor called; number of objects: " << ct << endl ;
	ShowObject();
}

Useless::Useless(int k ) : n(k)
{
	++ct ;

	cout << "Int constractor called; number of objects: " << ct << endl ;
	pc = new char[n];
	ShowObject();
}

Useless::Useless(int k,char ch) : n(k)
{
	++ct ;
	cout << "Int constractor called; number of objects: " << ct << endl ;
	pc = new char[n];
	for(int i = 0 ; i < n ; ++i)
	{
		pc[i] = ch ;
	}
	ShowObject();
}

Useless::Useless(const Useless & f) : n(f.n)
{
	++ct ;
	cout << "Copy constractor called; number of objects: " << ct << endl ;
	pc = new char[n];
	for(int i = 0 ; i < n ; ++i)
		pc[i] = f.pc[i];
	ShowObject();
}

Useless::Useless(Useless && f) : n(f.n)
{
	++ct ;
	cout << "Move constractor called; number of objects: " << ct << endl ;
	pc = f.pc;
	f.pc = nullptr ;
	f.n = 0 ;
	ShowObject();
}

Useless::~Useless()
{
	cout << "Destructor called ; objects left: " << --ct << endl;
	cout << "Deleted object:\n";
	ShowObject();
	delete [] pc ;

}

Useless Useless::operator+(const Useless & f) const
{
	cout << "Entering operator+()\n";
	Useless temp = Useless(n + f.n);
	for(int i = 0 ; i < n ; i++)
	{
		temp.pc[i]  = pc[i];
	}
	for(int i = n ; i < temp.n ; i++)
	{
		temp.pc[i] = f.pc[i-n];
	}

	cout << "Temp elements: \n";
	cout << "Leaving operator+()\n";

	return temp;
}

Useless & Useless::operator=(const Useless & f)
{
	if(this == &f)
		return *this ;
	delete [] pc ;
	n = f.n ;
	pc = new char[n];
	for(int i = 0 ; i < n ; ++i)
	{
		pc[i] = f.pc[i];
	}
	return *this ;
}

Useless & Useless::operator=(Useless && f)
{
	if(this == &f)
		return *this ;
	delete [] pc ;
	n = f.n ;
	pc = f.pc;
	f.n = 0 ;
	f.pc = nullptr ;
	return *this ;
}

void Useless::ShowObject() const
{
	cout << "Number of elements: " << n ;
	cout << " Data address: " << (void *) pc << endl;
}

void Useless::ShowData() const
{
	if(n == 0)
		cout << "(object empty)";
	else
		for(int i = 0 ; i < n ; ++i)
			cout << pc[i] ;
	cout << endl;
}
int main()
{
	{
		Useless one(10,'x');
		Useless two = one + one;
		cout << "Object one: ";
		one.ShowData();
		cout << "Object two: ";
		two.ShowData();
		Useless three,four;
		cout << "three = one\n";
		three = one ;

		cout << "Now object three:";
		three.ShowData();
		cout << "And object one:";
		one.ShowData();

		cout << "Four = one + two\n" ;
		four = one + two ;

		cout << "Now object four:";
		four.ShowData();

		cout << "four = move(one).\n ";
		four = move(one);
		cout << "And object one:";
		one.ShowData();
	}

	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter18/test
