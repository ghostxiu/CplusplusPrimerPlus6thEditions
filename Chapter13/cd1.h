//Changed by Ghostxiu 2017/9/21
//第十三章 编程练习二
//基类Cd
#ifndef CD_H_
#define CD_H_


class Cd{
private:
	char * performers;
	char * label;
	int selections ;//选择的数目
	double playtime;//播放时长，用分钟表示
public:
	Cd(char *s1 ,char * s2 ,int n ,double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void Report() const ;
	Cd & operator=(const Cd & d);
};
//以上原书声明部分
//派生类Classic
class Classic : public Cd {
private:
	char *cd_discribe;
public:
	Classic(){}
	Classic(char *s1, char *s2 , char * s3 ,int n , double x);
	Classic(const Cd & cd , char * s);
	Classic(const Classic & cl );
	virtual  ~Classic();
	virtual void Report() const ;
	Classic & operator=(const Classic & cl);

};

#endif // CD_H_
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13
