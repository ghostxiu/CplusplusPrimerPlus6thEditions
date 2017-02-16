#include<iostream>
//bottom-up 自下而上的设计方式
const int Max = 5 ;
int cin_arr (double arr[] ,int limit );
void show_arr (const double arr[],int n );
void revalue_arr(double r,double arr[ ], int n) ;
using namespace std ;

int main()
{

	double propertities[Max] ;


	int size = cin_arr(propertities,Max);
	show_arr(propertities,size);
	if(size > 0)
	{
		cout << "Enter revalutaion fator: " ;
		double factor ;
		while(!(cin >> factor))//若输入的factor小于0
		{
			cin.clear();
			while(cin.get() != '\n' )
				continue ;
			cout << "Bad Input , Please input a number : ";

		}
		revalue_arr(factor,propertities,size);
		show_arr(propertities,size);
	}
	cout << "Done.\n" ;
	cin.get();
	cin.get();
	return 0 ;
}

int cin_arr(double arr[], int limit)
{
	double temp ;
	int i ;
	for(i = 0 ; i < limit ; ++i )
	{
		cout << "Enter value #" << i+1 << ":";
		cin >> temp ;
		if(!cin)//cin表示判断输入是否是一个整数，若不是返回false
		{
			cin.clear();
			while(cin.get() != '\n')
			{
				continue;
			}
			cout << "Bad input ,Please enter a number .\n";
			break;
		}
		else if (temp < 0 )
		{
			break;
		}
		arr[i] = temp ;
	}
	return i ;
}

void show_arr(const double arr[],int n )
{
	for(int i = 0 ; i < n ; ++i )
	{
		cout << "Property #" << i+1 << ": $";
		cout << arr[i] << endl ;
	}
}

void revalue_arr(double r , double arr[] , int n )
{
	for(int i = 0 ; i < n ; ++i)
	{
		arr[i] *= r ;
	}
}
