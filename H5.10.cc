#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter the number of rows:" ;
	int n ;
	cin >> n ;
	for( int i = 0 ; i < n ; ++i )
	{
		//打印每一行
		for(int j = 0 ; j < n ; ++j )
		{
			//打印每一行的每一符号
			if(j < n - i - 1  )
			{
				cout << '.'  ;
			}
			else
			{
				cout << '*' ;
			}
		}
		cout << endl ;
	}
	return 0 ;
}
