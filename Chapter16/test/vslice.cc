//Changed by Ghostxiu 2017/12/15
//原书程序清单16.21 内容
//STL  方法
//使用valarray对象 和slice
//slice类 slice(索引头，索引数，跨距)
#include <iostream>
#include <valarray>
#include <cstdlib>

using namespace std ;
const int SIZE = 12;
typedef valarray <int> vint;
void show(const vint & v ,int cols);

int main()
{
	vint valint(SIZE);
	for(int i = 0 ; i < SIZE; ++i)
	{
		valint[i] = rand()%10;
	}
	cout << "Original array:\n";
	show(valint,3);
	vint col_2(valint[slice(1,4,3)]);
	cout << "Second column:\n";
	show(col_2,1);
	vint row_2(valint[slice(3,3,1)]);
	cout << "Second column:\n";
	show(row_2,3);
	cout << "Set last column to 10:\n";
	valint[slice(2,4,3)] = 10 ;
	show(valint,3);
	cout << "Set first column to next two:\n";
	valint[slice(0,4,3)] = vint(valint[slice(1,4,3)])
		+ vint(valint[slice(2,4,3)]);
	show(valint,3);
	return 0;
}

void show(const vint & v ,int cols)
{
	int lim = v.size();
	for(int i = 0 ; i < lim ; ++i)
	{
		cout.width(3);
		cout << v[i];
		if(i % cols == cols - 1)
		{
			cout << endl ;
		}
		else
		{
			cout << " ";
		}
	}

	if(lim % cols != 0)
	{
		cout << endl;
	}

}
//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
