#include<iostream>
//修改自7.7.cc,用指针限定数组范围-xxx
//表示double型的数组到底需要用什么指针类型？---和原类型一样
const int Max = 5 ;
double *cin_arr (double *arr);
void show_arr ( double *arr,double *tail);
void revalue_arr(double r,double *arr, double *tail) ;
using namespace std ;

int main()
{

	double *propertities = new double[Max] ;

	double * endd = cin_arr(propertities);
	show_arr(propertities,endd);
	if(endd != propertities)
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
		revalue_arr(factor,propertities,endd);
		show_arr(propertities,endd);
	}
	cout << "Done.\n" ;
	delete propertities;
	cin.clear();//重置输入流
	cin.get();
	cin.get();
	return 0 ;
}

double *cin_arr (double *arr)
{
	double temp ;
	double *p;
	int i = 0 ;
	for(p = arr ; i < Max ; ++p,++i )
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
	return p ;
}

void show_arr( double *arr,double *tail)
{
	double *p ;
	int i = 0 ;
	for(p = arr ; p != tail ; ++p ,++i)
	{
		cout << "Property #" << i+1 << ": $";
		cout << *(arr + i) << endl ;
		//or use cout << *p << endl;
	}
}

void revalue_arr(double r,double *arr,  double *tail)
{
	double *p;
	for(p = arr ; p != tail ; ++p)
	{
		(*p) *= r ;
	}
}
