//Changed by Ghostxiu 2017/12/15
//原书程序清单16.18 内容
//STL  方法
//对比list 的remove 和stl内部的不同
#include <iostream>
#include <list>
#include <algorithm>
void show(int v);
int LIM = 10 ;

using namespace std ;
int main()
{

	int arr[LIM] = {4,5,4,2,2,3,4,8,1,4};
	list<int> al(arr,arr+LIM);
	list<int> bl(al);

	cout << "Original list contents: \nal:\t";
	for_each(al.begin(),al.end(),show);
	al.remove(4);

	cout << "\nAfter using the remove method:\n";
	for_each(al.begin(),al.end(),show);
	//使用STL的remove功能
	list<int>::iterator last = remove(bl.begin(),bl.end(),4);
	cout << "\nAfter using the remove function:\nlb:\t";
	for_each(bl.begin(),bl.end(),show);
	cout << "\nAfter using the erase method:\nlb:\t";
	//需要再使用一次erase的原因stl的remove功能
	bl.erase(last,bl.end());
	for_each(bl.begin(),bl.end(),show);

	return 0;
}
void show(int v)
{
	cout << v << " " ;
}
//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
