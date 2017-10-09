//Changed by Ghostxiu 2017/9/15
//原书程序清单14.8 内容 is-a 继承
//多重继承
#include "worker0.cc"

const int LIM = 4;
int main()
{
	Waiter bob("Bob Apple",314L,5);
	Singer bev("Beverly Hill",522L,3);
	Waiter w_temp ;
	Singer s_temp ;
	Worker * pw [LIM] = {&bob,&bev,&w_temp,&s_temp};

	int i ;
	for(i = 2 ; i < LIM ;++i)
		pw[i] -> Set();
	for(i = 0 ; i < LIM ; ++i)
	{
		pw[i] ->Show();
		cout <<endl;
	}
	return 0;
}
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
