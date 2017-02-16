//C++递归
#include<iostream>

void countdown(int n );

int main()
{
	countdown(4);
	return 0 ;
}

void countdown(int n )
{
	using namespace std ;
	cout << "Counting down ..." << n << " (n is at " << &n << ")" << endl ;
	if(n > 0 ) countdown(n -1 );
	cout << n << ": Kaboom!\t" << "   (n is at " << &n << ")" << endl ;
}
//注意n地址的变化
