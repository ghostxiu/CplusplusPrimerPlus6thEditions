#include<iostream>
//模板
const int Size =  5 ;

template <typename T>
T max_arr(const T *arr);

using namespace std ;

int main()
{
	cout << "Try double :" ;
	double da[Size] = {1.43,34.231,232324.2,57,9};
	int  ia[Size] =  {2,34,23,56,45};

	double max_d = max_arr(da);
	cout << max_d  <<endl ;
	int max_a =max_arr(ia);
	cout  <<"Try  int :";
	cout << max_a ;

	cin.get();
	cin.get();
	return 0 ;
}

template <typename T>
T max_arr( const T *arr)
{
	T max = arr[0];
	for(int i = 1 ; i < Size ; ++i)
	{
		if(max < arr[i])
		{
			max =arr[i];
		}
	}
	return max;
}
