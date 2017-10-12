//Changed by Ghostxiu 2017/10/11
//原书程序清单14.16 内容
//模版指针栈
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stck1tp1.h"

const int NUM = 10;

int main()
{
	using std::cin ;
	using std::cout ;
	using std::endl;

	std::srand(time(nullptr));
	cout << "Please enter stack size: " ;
	int stacksize ;
	cin >> stacksize ;
	Stack <const char * > st(stacksize );


	const char * in[NUM] = {
		" 1:Hank Gilgamesh"," 2:Kiki Ishtar",
		" 3:Betty Rocker" ," 4:Ian Flagranti",
		" 5:Wolfgang Kibble"," 6:Portia Koop",
		" 7:Joy Almondo" , " 8:Xaverie Paprika",
		" 9:Juan Moore" , " 10:Misha Mache"
	};

	const char * out[NUM];

	int processed = 0 ;
	int nextin = 0 ;

	while(processed < NUM)
	{
		if(st.isempty())
			st.push(in[nextin++]);
		else if(st.isfull())
		{
			st.pop(out[processed++]);
		}
		else if (std::rand() % 2 && nextin < NUM)
		{
			st.push(in[nextin++]);

		}
		else
			st.pop(out[processed++]);
	}
	for(int i = 0 ; i < NUM ; ++i)
	{
		cout << out[i] << endl ;
	}

	cout << "Bye!\n";
	return 0;
}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test

