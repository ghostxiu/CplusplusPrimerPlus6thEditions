//使用array类
#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<double,3> M;
	cout << "Now input the 3 time 40 m distance you running:\n";
	int v = 0;
	for(int i = 0 ; i < 3 ; i++ )
	{
		cout << "\nThe " << i << " times:";
		cin >> M[i];
		v +=M[i];
	}
	v/=3;
	cout << "\n\n\nNow out put:";
	for(int i = 0 ; i < 3 ; i++ )
	{
		cout << "\nThe " << i << " times:" << M[i];
	}
	cout <<"\nThe average time of the 40m is " << v << " seconds.\n";
	return 0 ;
}
