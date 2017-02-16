//返回C-风格字符串的函数
//实际上是返回字符串的地址
#include<iostream>
char *builderstr( char c ,int n );
int main()
{
	using namespace std;
	char ch ;
	int x;
	cout << "Enter a character:" ;
	cin >> ch ;
	cout << "Enter a number :";
	cin >> x ;

	char *ps = builderstr(ch,x);
	cout << ps << endl;
	delete [] ps;
	int k = x /2 - 3;
	ps = builderstr('+',k);
	cout << ps << "-DONE-"<<ps <<endl ;
	delete []  ps ;
	return 0 ;
}

char *builderstr(char c ,int n )
{
	char *pstr = new char[n+1];//n个字符串需要用n+1个单元来存储
	pstr[n] = '\0';
	while(n--)
	{
		pstr[n] = c ;
	}
	//逆向填充
	return pstr ;
}

