//Changed by Ghostxiu 2017/9/15
//原书程序清单14.7 内容 is-a 继承
//多重继承

#include "worker0.h"
#include <iostream>

using std::cin ;
using std::cout ;
using std::endl;

//抽象基类Worker
Worker::~Worker(){}
void Worker::Set()
{
	cout << "Enter worker's name:";
	getline(cin,fullname);
	cout << "Enter worker's ID:";
	cin >> id ;
	while(cin.get() != '\n')
	{
		continue ;
	}
}

void Worker::Show() const
{
	cout << "Name: " << fullname << endl;
	cout << "Employee ID: " << id << endl;
}

//派生类Waiter 的方法

void Waiter::Set()
{
	Worker::Set();
	cout << "Enter waiter's panache rating: " ;
	cin >> panache ;
	while (cin.get() != '\n')
	{
		continue;
	}
}

void Waiter::Show() const
{
	cout << "Category: waiter\n";
	Worker::Show();
	cout << "Panache rating: " << panache <<"\n";
}

//Singer 的方法
char * Singer::pv[] = { "other","alto","contraltp",
		"soprano","bass","baritone","ternor"};

void Singer::Set()
{
	Worker::Set();
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

void Singer::Show() const
{
	cout << "Category: singer \n";
	Worker::Show();
	cout << "Vocal range: " << pv[voice] << endl;

}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
