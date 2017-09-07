//使用指向对象的指针
#include"string1.cc"
//使用随机数
#include<ctime>
#include<cstdlib>
const int Arsize = 10 ;
const int MaxLen = 81 ;

int main()
{
	using std::endl ;
	String name ;
	cout << "Enter your name:";
	cin >> name;
	cout << name << " , please enter up to :" <<Arsize
		<< " short sayings <empty line to quit>:\n";
	String Sayings[Arsize];
	char temp[MaxLen];
	int i ;
	for(i = 0; i < Arsize ; ++i)
	{
		cout << i+1 << ":";
		cin.get(temp,MaxLen);
		while(cin &&cin.get()!= '\n')
		{
			continue;
		}
		if(!cin || temp[0] == '\0')
		{
			break;
		}
		else
		{
			Sayings[i] = temp;
		}
	}
	int total = i ;

	if(total > 0)
	{

		cout << "\n\nHere are your sayings:\n";
		//int shortest = 0 ;
		//int first = 0;
		//使用指向对象的指针
		String * shortest = &Sayings[0];//最短的一行
		String * first = &Sayings[0];//字母表排在最前面的字
		for(i = 0 ; i < total ; ++i)
		{
			cout << Sayings[i][0] << ":" << Sayings[i] <<endl;
			//输出第一个字符：输入

			if(i > 0)
			{
				if(Sayings[i].length() < shortest->length())
				{
					shortest = & Sayings[i];
				}
				if(Sayings[i] < *first)
				{
					first = & Sayings[i];
				}
			}
		}
		cout << "Shortest saying:\n" <<*shortest <<endl;
		cout << "First alphabetically:\n" <<* first <<endl;

		//产生花生随机数
		srand(time(0));
		int choice = rand()%total;
		//使用new创建一个新的类对象
		String * rand_say = new String(Sayings[choice]);
		cout << "Rand Saying ：" <<*rand_say <<endl;
		//回收空间
		delete rand_say;

		cout << "The program used " << String::Howmany()
			<<" String objects.Bye.\n";
	}

	else
	{
		cout <<"No input!\n" <<endl;
	}
	return 0 ;
}
