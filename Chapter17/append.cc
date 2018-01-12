//Changed by Ghostxiu 2017/1/10
//原書程序清單17.18 內容
//追加文件

#include <iostream>
#include <string  >
#include <fstream >
#include <cstdlib >

int main( int argc , char * argv[] )
{
	using namespace std ;
	const char * file = "guest.txt";

	ifstream fin;
	fin.open(file);
	char ch ;
	//第一次文件为空，不操作
	//第二次运行后才在此处追加内容
	if(fin.is_open())
	{
		cout << "Here are the current contents  of the "
			<< file << " file: ";
		while(fin.get(ch))
			cout << ch ;
		fin.close();
	}

	ofstream fout;
	fout.open(file,ios::out|ios::app);
	if(!fout.is_open())
	{
		cerr << "Can't open " << file << " file for output.\n";
		exit(EXIT_FAILURE);
	}

	cout << "Enter guest name (enter a blank line to quit):\n";
	string name ;
	while (getline(cin,name) && name.size() > 0)
	{
		fout << name << endl ;
	}
	fout.close();

	fin.clear();//并不是必须，一些老式编译器不支持IOS标准，所以不使用会出错
	fin.open(file);
	if (fin.is_open())
	{
		cout << "Here are the new contents of the " << file << " file:\n";
		while(fin.get(ch))
		{
			cout << ch ;
		}
		fin.close();
	}
	cout << "Done.\n";

	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
