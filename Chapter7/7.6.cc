#include<iostream>

const int ArSize = 8 ;
int sum_arr (int arr[] , int n );
int main( )
{
	int cookie_arr[ArSize] = {1,2,4,8,16,32,64,128};

	using namespace std ;

	std::cout << cookie_arr << " = arraddress , " ;
	std::cout << sizeof cookie_arr << " = size of cookies.\n";

	int sum = sum_arr(cookie_arr,ArSize);
	cout << "Total cookie eaten : " << sum << " cookies."<< endl ;

	sum = sum_arr(cookie_arr , 3);
	cout << "The first three ate : " << sum << " cookies.\n";

	sum = sum_arr(cookie_arr+ 4 , 4 );
	cout << "The last four  ate : " << sum << " cookies.\n";
	return 0 ;
}
//sizeof cookie 是整个数组的长度，而sizeof arr 只是数组指针的长度
int sum_arr ( int arr[] ,int n )
{
	int result  = 0 ;
	std::cout << arr << " = arr , " ;
	std::cout << sizeof arr << " = size of arr.\n";
	for(int i = 0 ; i < n ; ++i )
	{
		result += arr[i];
	}
	return result;
}
