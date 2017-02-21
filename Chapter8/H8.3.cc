//循环输入string转换小写为大写
#include<iostream>
#include<cctype>//to use function toupper();
using namespace std ;

string  & cap_min(string &s);

int main()
{
	string s ;
	cout << "Enter a string(q to quit) :";
	while(cin >> s , s[0] != 'q')
	{
		s = cap_min(s);
		cout << s << endl ;
		cout << "Enter a string(q to quit) :";
	}
	cout << "Bye!\n";
	cin.get();
	cin.get();

	return 0 ;
}

string  & cap_min(string &s)
{
	int i = 0 ;
	//注意string 可以像char * 一样使用
	while(s[i])
	{
		s[i] = toupper(s[i]);
		++i;
	}
	return s ;
}
