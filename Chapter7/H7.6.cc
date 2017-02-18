//用函数实现数组的功能
#include<iostream>
const int Size = 100 ;
int Fill_array(double *arr );//填充函数
void Show_array(double const *arr , int n);//输出函数
void Reverse_array(double *arr , int n);//转置函数

int main()
{
	double *arr  = new double[Size];
	std::cout << "Enter an array : \n";
	int len = Fill_array(arr);

	std::cout << "\n\n\nWe can see the array:\n";
	Show_array(arr,len);
	Reverse_array(arr,len);
	std::cout << "\n\n\The array reversed is:\n";
	Show_array(arr,len);
	std::cout << "Done.\n";

	delete arr;
	return 0 ;
}

int Fill_array(double  *arr )
{
	double x ;
	int i = 0 ;
	std::cout << i + 1 << ":";
	while(std::cin >> x)
	{
		arr[i++] = x ;
		std::cout << i + 1 << ":";
		std::cin.get();
	}
	return i ;
}

void Show_array(double const *arr , int n)
{
	using namespace std ;
	for(int i = 0 ; i < n ; ++i)
	{
		cout << i+1 << " :  ";
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Reverse_array(double *arr,int n)
{
	double tmp;
	for(int i = 0 ; i < n/2 ; ++i)
	{
		tmp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = tmp ;
	}
}

