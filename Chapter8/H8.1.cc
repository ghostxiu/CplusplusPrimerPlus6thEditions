//打印的次数等于函数调用次数，实际上使用了一个静态的全局变量
//主要考察的是函数参数默认值
#include<iostream>
using namespace std ;
static int keep = 0 ;
const int Size = 20 ;
void show(const char * s ,int k = 0 );
int main()
{

	char *st = new char[20];
	cout << "Enter a string:";
	cin >> st ;
	show(st);
	for(int i = 0 ; i < Size / 4 ; ++i)
	{
		show(st ,i );
	}
	show(st);
	return 0 ;
}

void show(const char * s ,int k  )
{
	cout << "\n";
	if (k == 0)
	{
		cout << s << endl ;
	}
	else
	{
		cout << "The number pass in is :" << k ;
		cout <<",But cout "<< keep <<" times.\n";
		for(int i = 0 ; i < keep ; ++i)
		{
			cout << s << endl ;
		}
	}
	keep++;
}
