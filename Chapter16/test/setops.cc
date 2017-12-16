//Changed by Ghostxiu 2017/12/4
//原书程序清单16.13 内容
//STL  方法
//关联容器 set简单方法演示

#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <iterator>

int main()
{

	using namespace std ;

	const int N = 6;
	string s1[N] = { "buffon" , "thinkers" , "for" , "heavy" , "can" , "for"};
	string s2[N] = { "metal" , "any" , "food", "elegant" , "deliver" , "for" };

	set<string> A(s1,s1+N);
	set<string> B(s2,s2+N);
	//省略了一个默认参数less<string>
	ostream_iterator<string, char> outer(cout," ");
	cout << "Set A:" ;
	copy(A.begin(),A.end(),outer);
	cout << endl ;

	cout << "Set B:" ;
	copy(B.begin(),B.end(),outer);
	cout << endl;

	cout << "Union of A & B:\n";
	set_union(A.begin(),A.end(),B.begin(),B.end(),outer);
	cout << endl ;

	//求交集
	cout << "Intersection A & B:\n";
	set_intersection(A.begin(),A.end(),B.begin(),B.end(),outer);
	cout <<endl;
	//求差集
	cout << "Difference of A & B:\n";
	set_difference(A.begin(),A.end(),B.begin(),B.end(),outer);
	cout << endl ;


	cout << "Set C:\n";
	set<string> C;
	//由于C.begin() 不能作为输入迭代器，
	//set_union要覆盖原数据空间而C本身为空
	//所以只能使用插入迭代器
	set_union(A.begin(),A.end(),B.begin(),B.end(),insert_iterator<set<string> >(C,C.begin()));
	copy(C.begin(),C.end(),outer);
	cout << endl;


	string s3("ghostxiu");
	C.insert(s3);
	cout << "Set C After insertion:\n";
	copy(C.begin(),C.end(),outer);
	cout << endl;

	//将不小于"ghostxiu"的迭代器和第一个大于spook的迭代器
	//中间的元素复制到输出迭代器
	cout << "Showing a range:\n";
	copy(C.lower_bound("ghostxiu"),C.upper_bound("spook"),outer);
	cout << endl;
	return 0;
}


//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
