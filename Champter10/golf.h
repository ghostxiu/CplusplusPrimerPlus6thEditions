const int Len = 40 ;
class Golf
{
private:
	char fullname[Len];
	int handicap;
public:
	Golf(){};//必须声明常规构造函数，来为类对象开辟空间，注意大括号
	Golf(const char *name ,int hc);
	int setGolf() ;
	void Handicap(int hc );
	void showGolf() const;
	int Score();
};
