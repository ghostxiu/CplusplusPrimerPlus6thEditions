//Changed by Ghostxiu 2017/10/9
//原书程序清单14.11 内容 MI
//多重继承 MI 和 虚基类

#include "workermi.h"
#include <iostream>
using std::cout ;
using std::cin;
using std::endl;
//Worker类方法
Worker::~Worker(){}

void Worker::Data () const
{
	cout << "Name: " << fullname << endl;
	cout << "Employee ID: " << id << endl ;
}

void Worker::Get ()
{
	getline(cin,fullname);
	cout << "Enter worker's ID:";
	cin >> id ;
	while(cin.get() != '\n')
		continue;
}

//Waiter 类方法
void Waiter::Set()
{
	cout << "Enter waiter's name: ";
	Worker::Get();
	Get();

}

void Waiter::Show() const
{
	cout << "Category: waiter \n";
	Worker::Data();
	Data();
}

//受保护的方法
void Waiter::Data () const
{
	cout << "Panache rating: " << panache << endl ;
}

void Waiter::Get ()
{
	cout << "Enter the waiter's panache:";
	cin >> panache ;
	while(cin.get() != '\n')
		continue;
}

//Singer 方法
char * Singer::pv[] = { "other","alto","contraltp",
		"soprano","bass","baritone","tenor"};

void Singer::Set()
{
	cout << "Enter the singer's name:";
	Worker::Get();
	Get();

}

void Singer::Show() const
{
	cout << "Category: singer \n";
	Worker::Data();
	Data();
}

//受保护的方法
void Singer::Data() const
{
	cout << "Vocal range: " << pv[voice] << endl;
}

void Singer::Get()
{
	cout << "Enter number for singer's vocal range:\n";
	int i ;
	for(i = 0 ; i < Vtypes ; ++i)
	{
		cout << i << ":" << pv[i] << "\t";
		if(i%4 == 3)
		{
			cout << endl;
		}
	}
	while ( cin >> voice && (voice < 0 || voice >= Vtypes))
	{
		cout << "Please enter a value >= 0 and < " << Vtypes <<endl;
	}
	while (cin.get() != '\n')
	{
		continue ;
	}
}

//SingingWaiter 的方法
void SingingWaiter::Data() const
{
	Singer::Data();
	Waiter::Data();
}

void SingingWaiter::Get()
{
	Waiter::Get();
	Singer::Get();
}

void SingingWaiter::Set ()
{
	cout << "Enter singing waiter's name: ";
	Worker::Get();
	Get();
}

void SingingWaiter::Show() const
{
	cout << "Category: singing waiter\n";
	Worker::Data();
	Data();
}
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
