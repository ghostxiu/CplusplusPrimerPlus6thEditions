//Changed by Ghostxiu 2017/1/10
//原書程序清單17.17內容
//计算文档中张字符的出现次数
//使用命令行的方式

#include <iostream>
#include <cstdlib >//for exit
#include <fstream >


int main( int argc , char * argv[] )
{
	using namespace std ;
	if (argc == 1 )
	{
		cerr << "Usage: " << argv[0] << " filename[s]\n";
		exit(EXIT_FAILURE);
	}

	ifstream fin ;
	long count ;
	long total = 0 ;
	char ch ;
	for(int file = 1 ; file < argc ; ++file)
	{
		fin.open(argv[file]);
		if(!fin.is_open())
		{
			cerr << "Could not open " << argv[file] << endl ;
			fin.clear();
			continue;
		}
		count = 0 ;
		while(fin.get(ch))
		{
			count++;
		}
		cout << count << " character in " << argv[file] << endl ;
		total += count ;
		fin.clear();
		fin.close();
	}
	cout << total << " characters in all files.\n";

	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
