//Changed by Ghostxiu 2017/1/10
//原書程序清單17.19 內容
//二级制i/o

#include <iostream>
#include <iomanip >
#include <fstream >
#include <cstdlib >


using namespace std ;
inline void eatline() {while(cin.get() != '\n') continue;}

struct planet
{
	char name[20];//行星名称
	double population ;//人口
	double g ; //重力
};


int main( int argc , char * argv[] )
{
	const char * file = "palnet.dat";

	ifstream fin;
	fin.open(file,ios_base::in|ios_base::binary);
	planet pl ;
	cout << fixed << right;
	//第一次文件为空，不操作
	//第二次运行后才在此处追加内容
	if(fin.is_open())
	{
		cout << "Here are the current contents  of the "
			<< file << " file: \n";
		while(fin.read((char *) &pl , sizeof pl ))
		{
			cout  << setw(20) << pl.name << ":";
			cout <<setprecision(0) << setw(12) << pl.population ;
			cout <<setprecision(2) <<setw(6) << pl.g << endl;
		}
		fin.close();
	}

	ofstream fout;
	fout.open(file,ios::out|ios::app|ios::binary);
	if(!fout.is_open())
	{
		cerr << "Can't open " << file << " file for output.\n";
		exit(EXIT_FAILURE);
	}

	cout << "Enter guest name (enter a blank line to quit):\n";
	char name[20] ;
	cin.get(pl.name,20);
	while (pl.name[0] != '\0')
	{
		eatline();
		cout << "Enter the planetary population: " ;
		cin >> pl.population ;

		cout << "Enter the planet's accleration of gravity: " ;
		cin >> pl.g ;
		eatline();
		fout.write((char *) &pl , sizeof pl);
		cout << "Enter guest name (enter a blank line to quit):\n";
		cin.get(pl.name,20);
	}
	fout.close();

	fin.clear();//并不是必须，一些老式编译器不支持IOS标准，所以不使用会出错
	fin.open(file,ios_base::in|ios_base::binary);
	if (fin.is_open())
	{
		cout << "Here are the current contents  of the "
			<< file << " file: \n";
		while(fin.read((char *) &pl , sizeof pl ))
		{
			cout  << setw(20) << pl.name << ":";
			cout <<setprecision(0) << setw(12) << pl.population ;
			cout <<setprecision(2) <<setw(6) << pl.g << endl;
		}
		fin.close();
	}
	cout << "Done.\n";

	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
