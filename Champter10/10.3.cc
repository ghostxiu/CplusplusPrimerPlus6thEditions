//完成9.1编程练习,使用合适的构造函数替换
//void setgolf(golf &g,const char *name ,int hc );
//并保留交互版本int setgolf(golf &g);
#include "user_golf.h"
using namespace std;
static int n = 0 ;
int hac ;
char name[Len];
Golf * ann[Len];


Golf input();//输入信息
void show();//输出信息
int minGolf();//找第一杆得分最低者

void say();

int main()
{

	Golf *gf = new Golf[Len];
	say();
	while ( 1 )
		{

			std::cout << "Please enter the golfer:\n";
			gf[n] = input();
			ann[n] = &gf[n];
			if ( !ann[n]->setGolf() ) break;
			n++;
		}
	show();

	int mf = minGolf();
	cout << "\n\n\nBecause of the No " << mf + 1 << " golfer is weakest.\n";
	cout << "We give one more chance to add:\n";

	int handi;
	cout << "The core is :" ;
	cin >> handi;//此处为什么会跳，有一个BUG;
	/*xxx 如上*/
	ann[mf]->Handicap(handi);
	show();

	return 0 ;
}

Golf input()
{
	if(n != 0)
	{//第一个多出来的回车，第一次没有
		cin.get();
	}
	cin.get(name,Len);
	cout << name << endl ;
	cout<< "Please enter the level of the golf:";
	cin >> hac ;
	cout <<hac << endl;
	Golf a ( name, hac );
	return a;
}

void show()
{
	cout << "\n\n\nNow show the golfs:\n ";
	for ( int i = 0 ; i < n ; ++i )
	{
		cout << "\nThe #" << i + 1 << " golf : \n";
		ann[i]->showGolf();
	}
}

int minGolf()
{
	int minf = 0 ;
	for ( int i = 0 ; i < n - 1 ; ++i )
		{
			if ( ann[i]->Score() > ann[i + 1]->Score() )
				{
					minf = i + 1;
				}
		}
	return minf;
}

void say()
{
	cout << "Today is a sunnday !\n";
	cout << "The hdu 532 lab's wander to hold a golf game.\n";
	cout << "Next ,game start!\n";
}
