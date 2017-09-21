//Changed by Ghostxiu 2017/9/15
//原书程序清单13.6内容 基类和派生类
//include tabtenn1.h + tabenn1.cc
#include "tabtenn1.cc"

int main()
{
	TableTennisPlayer player1("Tara","Boomdea",false);
	RatedPlayer rplayer1(1140 , "Mallory","Duck",true);
	rplayer1.Name();
	if(rplayer1.HasTable())
	{
		cout << ":" << "has a table .\n";

	}
	else
	{
		cout << ":hasn't a table.\n";
	}
	player1.Name();
	if(player1.HasTable())
	{
		cout << ":" << "has a table .\n";

	}
	else
	{
		cout << ":hasn't a table.\n";
	}

	cout << "Name :";
	rplayer1.Name();
	cout << " ; Rating : " << rplayer1.Rating() << endl;


	//用基类（TableTennisPlayer)对象(player1)初始化派生类(Ratedplayer)对象(rplayer2)
	RatedPlayer rplayer2(1212,player1);
	cout << "Name: " ;
	rplayer2.Name();
	cout << "; Rating :" << rplayer2.Rating()<<endl;

	return 0 ;
}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13/test

