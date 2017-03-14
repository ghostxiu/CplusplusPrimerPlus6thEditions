//修改9.9，使用string类替换字符串数组，使可以用=""来判别空行
#include<iostream>
#include<string>
using namespace std ;
void strcount(const string s );

int main()
{
	string input;

	cout << "Enter a line:\n";
	while(cin)
	{	using namespace std ;
		getline(cin,input);
		if(input == "")break;
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
	}


	cout << "Bye\n";
	return 0;

}

void strcount (const string str )
{
	using namespace std ;
	static int total = 0 ;
	int count = str.length() ;
	cout << "\"" << str << "\" contains: " ;

	total += count ;
	cout << count << " characters\n";
	cout << total << " total characters \n";
}
