//Changed by Ghostxiu 2017/10/11
//原书程序清单15.2 内容
//类友元
//通过使用引用 tv.h 和 tvfm.h 来切换前向声明
#include "tvfm.h"
#include <iostream>
bool Tv::volup()
{
	if(volume < MaxVal)
	{
		volume++;
		return true ;
	}
	else
	{
		return false ;
	}
}

bool Tv::voldown()
{
	if(volume > MinVal)
	{
		volume--;
		return true;
	}
	else
	{
		return false ;
	}
}


void Tv::settings() const
{
	using std::cout ;
	using std::endl;
	cout << "TV is " << (state == Off? "Off" : "One") << endl ;
	if(state == On)
	{
		cout << "Volume setting = " << volume << endl ;
		cout << "Channel setting = " << channel << endl ;
		cout << "Mode = "
			<< (mode == Antena ? "antenna" : "cable") << endl ;
		cout << "Input = "
			 << (input == TV ? "TV":"DVD") <<endl ;
	}

}

void Tv::chanup()
{
	if(channel < maxchannel )
	{
		channel++;
	}
	else
	{
		channel = 1;
	}
}
void Tv::chandown()
{

	if(channel > 1)
	{
		channel--;
	}
	else
	{
		channel = maxchannel ;
	}
}

//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
