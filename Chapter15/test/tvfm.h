//Changed by Ghostxiu 2017/10/11
//原书程序清单15.4 内容
//类友元
//使用前向声明
#ifndef TVFM_H_
#define TVFM_H_

class Tv;//前向声明
class Remote{
public:
	enum{Off,On};
	enum{MinVal,MaxVal = 20 };
	enum{Antena,Cable};
	enum{TV,DVD};
private:
	int mode ;
public:
	Remote(int m = TV):mode(m){} ;
	bool valueup(Tv & t) ;
	bool valuedown(Tv &t) ;
	void onoff(Tv & t);
	void chanup(Tv & t );
	void chandown(Tv & t) ;
	void set_chan(Tv & t ,int c) ;
	void set_mode(Tv & t) ;
	void set_input(Tv & t ) ;

};

class Tv{
public:
	enum{Off,On};
	enum{MinVal,MaxVal = 20 };
	enum{Antena,Cable};
	enum{TV,DVD};
	friend void Remote::set_chan(Tv & t , int c);

	Tv(int s = Off , int mc = 125 ) :state(s),volume(5),
		maxchannel(mc),channel(2),mode(Cable),input(TV){}
	void onoff() {state = (state == On) ? Off : On ; }
	bool ison() const { return state == On ; }
	bool volup();
	bool voldown();
	void set_mode(){mode = (mode == Antena)?Cable :Antena ;}
	void set_input(){input = (input == TV) ? DVD :TV; }
	void settings() const ;
	void chanup();
	void chandown();

private:
	int state ;
	int volume ;
	int maxchannel ;
	int channel ;
	int mode ;
	int input ;
};


//Remote 的类定义
bool Remote::valueup(Tv & t)
{
	return t.volup();
}
bool Remote::valuedown(Tv &t)
{
	return t.voldown();
}

void Remote::onoff(Tv & t)
{
	t.onoff();
}

void Remote::chanup(Tv & t )
{
	t.chanup();
}

void Remote::chandown(Tv & t)
 {
 	t.chandown();
}

void Remote::set_chan(Tv & t ,int c)
{
	t.channel = c ;
}

void Remote::set_mode(Tv & t)
{
	t.set_mode();
}

void Remote::set_input(Tv & t )
{
 	t.set_input();
}

#endif // TV_H_
//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
