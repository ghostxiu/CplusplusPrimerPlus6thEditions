//Changed by Ghostxiu 2017/1/3
//原書程序清單17.13內容
//使用get() 和 getline()
#include <iostream>

const int LIMIT = 255 ;

int main()
{
	using std::cout ;
	using std::cin;
	using std::endl;

	char input[LIMIT];


	cout << "Enter a string for get() processing:\n";
	cin.getline(input,LIMIT,'#');//getline丢弃分界符#，get不会
	cout << "Here is your input: " << endl ;
	cout << input << "\nDone with phase 1\n";
	char ch ;
	cin.get(ch);
	cout << "Next input character is " << ch << endl ;

	if(ch != '\n')
		cin.ignore(LIMIT,'\n');//用于清除前一行的信息


	cout << "Enter a string for get() processing:\n";
	cin.get(input,LIMIT,'#');
	cout << "Here is your input:\n";
	cout << input << "\nDone with phase 1\n";
	//ch = cin.get();
	cin.get(ch);
	cout << "Next input character is " << ch << endl ;


	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
