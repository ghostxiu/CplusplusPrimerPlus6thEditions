//Changed by Ghostxiu 2017/1/4
//原書程序清單17.15內容
//istream 方法
//peek() 来检测get() 是否读取了整行

#include <iostream>

const int SLEN = 10 ;
inline void eatline(){while(std::cin.get() != '\n')continue;}

int main()
{
	using std::cout ;
	using std::cin;
	using std::endl;

	char name[SLEN];
	char title[SLEN];
	cout << "Enter your name: ";
	cin.get(name,SLEN);
	if(cin.peek() != '\n')
		cout << "Sorry, we  only have enough room for "
			<< name << endl;
	eatline();

	cout << "Dear " << name << ", enter your title: \n";
	cin.get(title,SLEN);

	if(cin.peek() != '\n')
	{
		cout << "We forced to truncate your title.\n";
	}
	eatline();
	cout << " Name: " << name
		<< "\nTitle: " << title << endl ;


	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
