//Changed by Ghostxiu 2017/12/4
//原书程序清单16.14 内容
//STL  方法
//关联容器multimap 简单方法演示
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std ;
typedef int KeyType;
typedef pair<const KeyType,string> Pair;
typedef multimap<KeyType , string> MapCode;

int main()
{
	MapCode codes;

	codes.insert(Pair(415,"San Francisco"));
	codes.insert(Pair(510,"Oakland"));
	codes.insert(Pair(718,"Brooklyn"));
	codes.insert(Pair(718,"Stanten Island"));
	codes.insert(Pair(415,"San Rafael"));
	codes.insert(Pair(510,"Berkeley"));

	//显示键值为x的数量
	cout << "Numbers of cities with area code 415:"
		 << codes.count(415)  << endl ;
	cout << "Numbers of cities with area code 510:"
		 << codes.count(510)  << endl ;
	cout << "Numbers of cities with area code 718:"
		 << codes.count(718)  << endl ;
	//顺序输出multimap中的元素
	cout << "Area Code \t City:\n";
	MapCode::iterator it ;
	for (it = codes.begin();it != codes.end();it++)
	{
		cout << "\t"<< (*it).first << "\t"
			 << (*it).second << endl;
	}

	pair<MapCode::iterator,MapCode::iterator> range =
		codes.equal_range(718);
	//or use auto range = codes.equal_range(718);

	cout << "Cities with area code 718: \n";
	for(it = range.first ; it != range.second ; ++it)
	{
		cout << (*it).second << endl;
	}


	return 0;
}
//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
