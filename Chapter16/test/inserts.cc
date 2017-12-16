//Changed by Ghostxiu 2017/11/28
//原书程序清单16.11 内容
//STL  方法 插入迭代器
//using stl function
//back_insert_iterator  front_insert_iterator insert_iterator
#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>

using namespace std ;

string s1[4]= {"fine" , "fish" , "fashion" , "fate" };
string s2[2] = {"busy" , "bat"};
string s3[2] = {"silly" , "singers" };

void out_put( const string & s )
 {
 	cout << s << " " ;
}


int main()
{
	vector <string> str(4);
	copy(s1,s1+4,str.begin());
	for_each(str.begin(),str.end(),out_put);
	cout << endl ;

	//注意vector仅支持尾部插入和随机插入不支持前向插入
	//如果对于队列的话，支持前向插入，而且可能前项插入更佳节省时间
	copy(s2,s2+2,back_insert_iterator<vector<string> >(str));
	for_each(str.begin(),str.end(),out_put);
	cout << endl ;

	copy(s3,s3+2,insert_iterator<vector<string> > (str,str.begin()));
	for_each(str.begin(),str.end(),out_put);
	cout << endl ;


	return 0;
}




//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
