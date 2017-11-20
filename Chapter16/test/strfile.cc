//Changed by Ghostxiu 2017/11/16
//原书程序清单16.2 内容
//string类 输入
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

int main()
{
	using std::string;
	using std::cout ;
	using std::endl;
	using std::ifstream ;
	using std::cerr ;


	ifstream fin ;
	fin.open("test_in.txt");
	if(fin.is_open() == false )
	{
		cerr <<  "Can`t open File.Bye.\n";
		exit(EXIT_FAILURE);
	}
	string item;
	int count = 0 ;
	getline(fin,item,':');
	while(fin)
	{
		++count ;
		cout << count << ": " << item << endl;
		getline(fin,item,':');
		//当界定分界符后,换行符和空白被视为常规字符
	}
	cout << "Done\n";

	fin.close();


	return 0;
}


//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
