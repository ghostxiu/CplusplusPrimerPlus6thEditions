//Changed by Ghostxiu 2017/10/22
//编程练习3
//包括文件 queuetp.h queuetp.cc 14.3.cc
//定义一个QueueTp模版，创建一个指向Worker类的指针队列
#include "queuetp.cc"
#include <cstring>

using std::strchr;
int LIMS = 5 ;


int main()
{
	QueueTp<Worker*> lolas(LIMS);
	//指向Worker类的指针队列
	while(!lolas.isfull())
	{
		char choice ;
		cout << "Enter the employee category:\n"
			<<"w: waiter\ts: singer\t"
			<<"t: singingwaiter\tq:quit\n";
		cin >> choice;
		while(strchr("wstq",choice) == nullptr)
		{
			cout << "Please enter a w , s ,t or q: ";
			cin >> choice ;

		}
		if(choice == 'q')
		{
			break ;
		}
		Worker * temp ;
		switch(choice)
		{
			case 'w' : temp  = new Waiter;
			break;
			case 's' : temp = new Singer ;
			break;
			case 't' : temp = new SingingWaiter;
			break;
		}
		cin.get();
		temp -> Set();
		lolas.enqueue(temp);
	}

	cout << "\nHere is your staff :\n";
	while(!lolas.isempty())
	{
		Worker * temp ;
		lolas.dequeue(temp);
		cout << endl;
		temp -> Show();
	}
	cout << "Bye.\n";
	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14
