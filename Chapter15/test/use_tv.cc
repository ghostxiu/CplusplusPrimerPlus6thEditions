//Changed by Ghostxiu 2017/10/11
//原书程序清单15.3 内容
//类友元
#include "tv.cc"

int main()
{
	using std::cout ;
	Tv s42 ;
	cout << "Initial settings for 42\" TV:\n";
	s42.settings();
	s42.onoff();
	s42.chanup();
	cout <<  "\nAdjusted settings for 42\" TV:\n";
	s42.chanup();
	cout <<  "\nAdjusted settings for 42\" TV:\n";
	s42.settings();


	Remote grey;
	grey.set_chan(s42,10);
	grey.valueup(s42);
	cout << "\n42\" setting after using remote:\n";
	s42.settings();

	Tv s58(Tv::On);
	s58.set_mode();
	grey.set_chan(s58,28);
	cout << "\n58\" settings:\n";
	s58.settings();
	return 0 ;
}

//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
