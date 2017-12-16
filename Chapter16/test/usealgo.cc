//Changed by Ghostxiu 2017/12/15
//原书程序清单16.19 内容
//STL  方法
//使用三种容器 map set vector

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cctype> //function int tolower();
#include <string>
#include <iterator>

using namespace std ;
char tolower_c(char ch) { return tolower(ch);}
string & Tolower( string & s);
void show(const string &);

int main()
{

	vector<string> words ;
	cout << "Enter words (q to quit):";
	string input;
	while(cin>>input && input != "q")
	{
		words.push_back(input);
	}
	cout << endl ;
	cout << "You enter the following words:\n";
	for_each(words.begin(),words.end(),show);
	cout << endl ;
	set<string> wordset;
	transform(words.begin(),words.end(),insert_iterator<set<string> >
			(wordset,wordset.begin()),Tolower);
	cout <<"Alphabetic list of words:\n";
	for_each(wordset.begin(),wordset.end(),show);
	cout << endl ;
	map<string,int> wordmap;
	set<string>::iterator si ;

	for(si = wordset.begin();si != wordset.end(); ++si)
		wordmap[*si] = count(words.begin(),words.end(),*si);
	//word
	cout << "Word Frenquency:\n";
	cout << endl ;
	for(si = wordset.begin();si != wordset.end(); ++si)
		cout << *si << ":" << wordmap[*si] <<endl;

	return 0;
}


string & Tolower(string & s)
{
	transform(s.begin(),s.end(),s.begin(),tolower_c);
	return s ;
}

void show(const string & s )
{
	cout << s << " " ;
}
//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
