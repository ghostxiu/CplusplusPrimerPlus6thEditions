//Changed by Ghostxiu 2017/1/4
//原書程序清單17.14內容
//istream 方法
//peek() 返回下一个字符，但不抽取


#include <iostream>



int main()
{
	using std::cout ;
	using std::cin;
	using std::endl;

	char ch ;

	while(cin.get(ch))
	{
		if(ch != '#' )
			cout << ch ;
		else
		{
			cin.putback(ch);
			break ;
		}
	}


	if(!cin.eof())
	{
		cin.get(ch);
		cout << endl << ch <<" is next input character.\n";
	}
	else
	{
		cout << "End of the file reached!\n";
		std::exit(0);
	}

	while(cin.peek() != '#')
	{
		cin.get(ch);
		cout << ch ;
	}

	if(!cin.eof())
	{
		cin.get(ch);
		cout << endl << ch <<" is next input character.\n";
	}
	else
	{
		cout << "End of the file reached!\n";
	}
	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
