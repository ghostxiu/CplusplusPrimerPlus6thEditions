//十个高尔夫成绩
#include<iostream>
const int Size = 10 ;

int cin_arr(double *ar , int n );//输入成绩
double arr_avg(double const * ar , int n ) ;//计算平均值
void cout_arr(double const * ar ,int n , double avg);//显示平均值
int main()
{
	int t_size ;
	double avge ;
	double *arr = new double[Size];
	t_size =cin_arr(arr,Size);
	avge = arr_avg(arr,Size);
	cout_arr(arr,t_size,avge);

	delete [] arr ;
	return 0 ;


}

int cin_arr(double *ar , int n )
{
	std::cout << "Please enter the 10 achievement of 10 golf_man:\n";
	std::cout << "(0 to end).\n";
	double ac;
	int i = 0 ;
	while(std::cin >> ac , ac > 0 && i < n)
	{
		ar[i++] = ac ;
	}
	return i ;
}

double arr_avg(double const * ar , int n )
{
	double sum = 0.0 ;
	int i ;
	for(i = 0 ; i < n ; ++i)
	{
		sum += ar[i];
	}
	sum /= i ;
	return sum ;
}

void cout_arr(double const * ar ,int n , double avg)
{
	using namespace std ;
	cout << "The 10 achievement of 10 golf_man:\n";
	for(int i = 0 ; i < n ; ++i)
	{
		cout << i + 1 << ":" << ar[i] <<"\t";
	}
	cout << "\nThe average of " << n << " is " << avg << endl;
}
