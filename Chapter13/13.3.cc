//Changed by Ghostxiu 2017/9/24
//第十三章 编程练习三
//抽象基类
#include "dma1.cc"
const int NUM =  4 ;
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


	dmaABC *p_dma[NUM];
	p_dma[0] = new baseDMA(shirt);
	p_dma[1] = new lacksDMA(balloon);
	p_dma[2] = new dmaABC(balloon);
	p_dma[3] = new dmaABC("I am ghostxiu , Ray ,i will change the world", 666 );

	cout << "\n\n\nUse point.\n";
	for (int i = 0 ; i < NUM ; ++i)
	{
		p_dma[i] -> show();
	}

	for( int i = 0 ; i < NUM ; ++i)
	{
		delete p_dma[i];
	}
	cout << "Room recollect!\n";
	cout << "\nDone!\n";
	return 0;
}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13
