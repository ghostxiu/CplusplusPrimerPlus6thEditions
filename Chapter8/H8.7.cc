//修改8.14，显示数组总和
#include<iostream>

using namespace std ;

template<class T>
T sum_arr(T arr[] , int n );
template<class T>
T sum_arr(T *arr[] , int n ) ;

struct debts
{
	char name[50];
	double amount ;
};


int main()
{
	using namespace std ;
	int things[6] = {12,31,103,301,310,130};
	debts E[3] =
		{
			{"Ima Wolfe",2400.0},
			{"Ura Foxe",1300.0},
			{"Iby Stout",1800.0}
		};
	double *p[3] ;
	for(int i = 0 ; i < 3 ; ++i )
	{
		p[i] = &E[i].amount;
	}

	int sum_a = sum_arr(things,6);
	cout << "Mr.E's all of things:" ;
	cout << sum_a << endl ;

	double sum_b = sum_arr(p,3);
	cout << "Mr.E's all costs:" ;
	cout << sum_b << endl ;



	cin.get();
	cin.get();

	return 0 ;
}


template<class T>
T sum_arr(T arr[] , int n )
{
	int sum = 0 ;
	for(int i = 0   ; i < n ; ++i)
	{
		sum += arr[i];
	}
	return sum ;
}

//调用时 T = double
template<class T>
T sum_arr(T *arr[] , int n )
{
	double sum = 0.0 ;
	for(int i = 0 ; i < n ; ++i)
	{
		sum += *arr[i];
	}
	return sum ;
}
