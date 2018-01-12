//Changed by Ghostxiu 2017/1/6
//原書程序清單17.16內容
//将输入存入文件并读取后输出


#include <iostream>
#include <string >
#include <fstream>


int main()
{
	using namespace std ;
	string filename;

	cout << "Enter name for your file: " ;
	cin >> filename;


	ofstream fout(filename.c_str());
	cout << "Enter your secret number: " ;
	fout << "For your eyes only!\n";
	float secreat ;
	cin >> secreat ;
	fout << "Your secreat number is " << secreat ;
	fout.close();

	ifstream fin(filename.c_str());
	cout << "Here are the contents of " << filename << ":\n";
	char ch;
	while(fin.get(ch))
		cout << ch ;
	fin.close();

	cout << "\nDone\n";
	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
