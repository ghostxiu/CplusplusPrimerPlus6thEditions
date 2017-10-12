//Changed by Ghostxiu 2017/10/10
//原书程序清单14.13 内容 类模板
#include "stacktp.h"
#include <iostream>
#include <string>
#include <cctype>

using std::cin ;
using std::cout;
using std::endl;
using std::string ;

int main()
{
	Stack<string> st ;
	char ch ;
	string po ;

	cout << "Please enter A to add a purchase order,\n"
		 << "P to process a PO , or Q to quit.\n";
	while(cin >> ch && std::toupper(ch)!='Q')
	{
		while(cin.get() != '\n')
		continue ;
		if ( !std::isalpha(ch))
		{
			cout << '\a';
			continue ;
		}
			switch(ch)
			{
				case 'A':
				case 'a':cout << "Enter a PO number to add: ";
						 cin >> po ;
						 if(st.isfull())
							cout << "stack already full\n";
						 else
							st.push(po);
						 break;
				case 'P':
				case 'p':if(st.isempty())
							cout << "stack already empty\n";
						else
						{
							st.pop(po);
							cout << "PO #" << po << " popped\n";
							break;
						}
			}
			cout << "Please enter A to a purchase order,\n"
				 << "P to process a PO , or Q to quit.\n";
	}
	cout << "Bye\n";
	return 0 ;
}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
