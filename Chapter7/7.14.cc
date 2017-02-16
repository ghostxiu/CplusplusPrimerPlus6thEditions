//使用string对象传递
#include<iostream>
#include<string>
using namespace std ;
const int Size = 5 ;
void display_str(const string sa[],int n );

int main()
{
	string list[Size];

	cout << "Enter your favorite " << Size <<" running sports:\n";
	for(int i = 0 ; i < Size ; ++i)
	{
		cout << i + 1 << ":";
		getline(cin,list[i]);

	}
	display_str(list,Size);

	return 0 ;
}
void display_str(const string sa[],int n )
{
	cout << "Your list:\n";
	for(int i = 0 ; i < Size ; ++i)
	{
		cout << i + 1 << ":";
		cout << sa[i] << endl;

	}
}
