//函数的参数是数组
#include<iostream>

const int ArSize = 8 ;
int sum_arr (int arr[] , int n );
int main( )
{
	int cookie_arr[ArSize] = {1,2,4,8,16,32,64,128};

	using namespace std ;
	int sum = sum_arr(cookie_arr,ArSize);

	cout << " The sum of cookies : " << sum << endl ;

	return 0 ;
}
int sum_arr ( int arr[] ,int n )
{
	int result  = 0 ;
	for(int i = 0 ; i < n ; ++i )
	{
		result += arr[i];
	}
	return result;
}
