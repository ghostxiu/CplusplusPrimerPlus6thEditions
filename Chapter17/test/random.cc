//Changed by Ghostxiu 2017/1/11
//原書程序清單17.20 內容
//随机读写2进制文件

#include <iostream>
#include <iomanip >
#include <fstream >
#include <cstdlib >

const int LIM = 20 ;
using namespace std ;
inline void eatline() {while(cin.get() != '\n') continue;}

struct planet
{
	char name[LIM];//行星名称
	double population ;//人口
	double g ; //重力
};


int main( int argc , char * argv[] )
{
	const char * file = "palnet.dat";

	fstream finout;
	finout.open(file,ios_base::in|ios_base::out|ios_base::binary);
	planet pl ;
	cout << fixed << right;

	int ct = 0 ;
	if(finout.is_open())
	{
		cout << "Here are the current contents  of the "
			<< file << " file: \n";
		finout.seekg(0);
		while(finout.read((char *) &pl , sizeof pl ))
		{
			cout  << ct++ << ":" << setw(LIM) << pl.name << ":";
			cout <<setprecision(0) << setw(12) << pl.population ;
			cout <<setprecision(2) <<setw(6) << pl.g << endl;
		}
		if(finout.eof())
		{
			finout.clear();//清除文件结束标志EOF
		}
		else
		{
			cerr << "Error in reading " << file << ".\n";
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		cerr << "Error in reading " << file << ".\n";
		exit(EXIT_FAILURE);
	}

	//更改一个数据
	cout << "Enter the record number you want to change: " ;
	int rec ;
	cin >> rec ;
	eatline();
	if(rec < 0 || rec > ct)
	{
		cerr << "Invaild record number -- bye!\n";
		exit(EXIT_FAILURE);
	}


	streampos place = rec * sizeof pl ; //找到标志位的二级制位置
	finout.seekg(place);
	if(finout.fail())
	{
		cerr << "Error on attempted seek.\n";
		exit(EXIT_FAILURE);
	}

	finout.read((char *) &pl , sizeof pl );
	cout << "Your selection :";
	cout <<rec << ":" << setw(LIM) << pl.name << ":";
	cout <<setprecision(0) << setw(12) << pl.population ;
	cout <<setprecision(2) <<setw(6) << pl.g << endl;

	cout << "Enter planet name: ";
	char name[20] ;
	cin.get(pl.name,20);
	eatline();
	cout << "Enter the planetary population: " ;
	cin >> pl.population ;
	cout << "Enter the planet's accleration of gravity: " ;
	cin >> pl.g ;
	finout.seekp(place);//回到插入位置，在此处写入
	finout.write((char *) &pl , sizeof pl)<< flush;
	cout << "Enter guest name (enter a blank line to quit):\n";


	if(finout.fail())
	{
		cerr << "Error on attempted write.\n";
		exit(EXIT_FAILURE);
	}


	finout.seekg(0);

	cout << "Here are the current contents  of the "
		<< file << " file: \n";
	ct = 0 ;
	while(finout.read((char *) &pl , sizeof pl ))
	{
		cout  << ct++ << ":" << setw(LIM) << pl.name << ":";
		cout <<setprecision(0) << setw(12) << pl.population ;
		cout <<setprecision(2) <<setw(6) << pl.g << endl;
	}


	finout.close();
	cout << "Done.\n";

	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter17/test
