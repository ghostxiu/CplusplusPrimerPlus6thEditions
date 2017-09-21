//Changed by Ghostxiu 2017/9/20
//原书程序清单13.16内容
//包含文件 dma.h dma.cc
#include "dma.cc"

int main()
{
	baseDMA shirt("Portabelly",8);
	lacksDMA balloon("red","Blimpo",4);
	hasDMA map("Mercator","Buffalo keys",5);
	cout << "Displaying lacksDMA object:\n";
	cout << shirt <<endl;
	cout << "Displaying lacksDMA object:\n";
	cout << map <<endl ;
	lacksDMA balloon2(balloon);
	cout << "Result of lacksDMA copy:\n";
	cout << balloon2 << endl;
	hasDMA map2 ;
	map2 = map ;
	cout << "Result of hasDMA of hasDMA assignment:\n";
	cout << map2 << endl;
	return 0;
}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13/test

