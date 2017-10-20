//Changed by Ghostxiu 2017/10/11
//原书程序清单15.1 内容
//类友元
#ifndef TV_H_
#define TV_H_

class Tv{
public:
	friend class Remote;//类友元遥控器
	enum{Off,On};
	enum{MinVal,MaxVal = 20 };
	enum{Antena,Cable};
	enum{TV,DVD};

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


class Remote{
private:
	int mode ;
public:
	Remote(int m = Tv::TV) : mode(m) {}
	bool valueup(Tv & t) {return t.volup();}
	bool valuedown(Tv &t) {return t.voldown();}
	void onoff(Tv & t) { t.onoff();}
	void chanup(Tv & t ) {t.chanup();}
	void chandown(Tv & t) {t.chandown();}
	void set_chan(Tv & t ,int c) {t.channel = c ;}
	void set_mode(Tv & t) {t.set_mode();}
	void set_input(Tv & t ) {t.set_input();}

};

#endif // TV_H_


//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
