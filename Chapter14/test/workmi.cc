//Changed by Ghostxiu 2017/10/9
//原书程序清单14.12 内容 MI
//多重继承 MI 和 虚基类
#include "workermi.cc"
#include <cstring>

using std::strchr;

const int LIM = 5;

int main()
{
	Worker * lolas[LIM];

	int ct ;
	for( ct = 0 ; ct < LIM ; ++ct)
	{
		char choice ;
		cout << "Enter the employee category:\n"
			<<"w: waiter\ts: singer"
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
		switch(choice)
		{
			case 'w' : lolas[ct] = new Waiter;
			break;
			case 's' : lolas[ct] = new Singer ;
			break;
			case 't' : lolas[ct] = new SingingWaiter;
			break;
		}
		cin.get();
		lolas[ct] -> Set();
	}

	cout << "\nHere is your staff :\n";
	int i ;
	for ( i = 0 ; i < LIM ; ++i )
	{
		cout << endl;
		lolas[i] -> Show();
	}
	for ( i = 0 ; i < LIM ; ++i )
	{
		delete lolas[i];
	}
	cout << "Bye.\n";
	return 0;
}
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
