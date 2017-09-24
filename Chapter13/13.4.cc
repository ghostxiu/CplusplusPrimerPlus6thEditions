//Changed by Ghostxiu 2017/9/24
//第十三章 编程练习四
//b.有些方法在声明时候已经定义完成，所以无需重新定义
//c.operator=()方法在内部完成转换而不是重载，operator<<()方法不属于类，是友元，无需声明为虚函数
#include "port.cc"

using std::cin;
int main()
{
    char br[20] , st[20] ;
    int b = 0 ;
	char nn[30] ;
	int y = 0 ;
	Port *p_port[NUM];

	for(int i = 0 ; i < NUM ; ++i)
	{
		cout << "\n\n\nMake sure Port or Vintage Port : \n";
		cout << "Enter 1 for Port , 2 for Vintage Port: ";
		int tag;
		cin >> tag ;
		cout << "Enter the brand:";
		cin>>br;
		cout << "Enter the Style:";
		cin >>st ;
		cout << "How many bottles you want:";
		cin >> b ;
		if(tag == 2)
		{
			cout << "Enter the nick name :";
			cin >> nn;
			cout << "Enter the year: ";
			cin >> y ;
            p_port[i] = new  VintagePort(br,b,nn,y);
            continue;
		}
		p_port[i] = new Port(br,st,b);
	}

	//使用show 方法
	for(int i = 0 ; i < NUM ; ++i)
	{
		cout << "# " << i << " : \n";
		p_port[i] -> show();
		cout <<endl ;
	}

	//使用重载<<
	for(int i = 0 ; i < NUM ; ++i)
	{
		cout << "# " << i << " : \n";
		cout << *p_port[i] << endl ;
		cout <<endl ;
	}
	//使用<<只能输出派生类的基类内容

	//清理空间
	for(int i = 0 ; i < NUM ; ++i)
	{
		delete p_port[i];
	}

	cin.get();
	cin.get();
    return 0 ;
}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13
