//循环的计算阶乘
#include<iostream>
long long factorial( int k ) ;
int main()
{
	int num ;
	using namespace std ;
	cout << "Please enter a number:";
	while(cin >> num , num >= 0 )
	{
		cout << num << " factorial is : " << factorial(num)<< endl ;
		cout << "Please enter a number(-1 to quit):";
	}
}

long long factorial( int k )
{
	if( k == 0 || k == 1 ) return 1;
	return k * factorial(k-1);
}
