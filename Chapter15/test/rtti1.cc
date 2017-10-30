//Changed by Ghostxiu 2017/10/26
//原书程序清单15.17 内容
//RTTI runtime type identification
//dynamic_cast 运算符

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout  ;

class Grand{
private:
	int hold ;
public:
	Grand(int h = 0 ) :hold(h) {}
	virtual void Speak() const { cout << "I am a grand class.\n"; }
	virtual int Value() const { return hold ;}
};


class Superb : public Grand
{
public:
	Superb(int h = 0 ) : Grand(h) {}
	void Speak  () const { cout << "I am a superb class.\n";}
	virtual void Say () const {cout << "I hold the character!\n";}
};


class Magnificent : public Superb
{
private:
	char ch ;
public :
	Magnificent(int h = 0 , char v = 'A') : Superb(h) , ch(v) {}
	void Speak() const { cout << "I am a magnificent class!!!\n";}
	void Say() const {
		cout << "I hold the character " << ch << " and the integer "
			 << Value() << "!\n";
	}
};

Grand * GetOne();

int main()
{
	srand(time(nullptr));
	Grand * pg ; //pg是基类指针
	Superb * ps ;

	for (int i = 0 ; i < 5 ; ++i)
	{
		pg = GetOne();
		pg -> Speak();
		if( ps = dynamic_cast<Superb *>(pg))
		{
			ps -> Say();
		}
	}
	return 0;
}


Grand * GetOne()
{
	Grand *p ;//基类指针p
	int a = rand() % 3 ;
	switch (a)
	{
		case 0:p = new Grand(rand() %100);
		break;
		case 1:p = new Superb(rand() % 100) ;
		break;
		case 2:p = new Magnificent(rand() % 100 , 'A' + rand()%26);
		break;
	}



	return p ;
}

//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
