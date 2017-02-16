//C-风格字符串，与char数组的区别在于，字符串有内置结束字符。
#include<iostream>
unsigned int c_in_str (const char * str ,char ch );
int main()
{
	using namespace std ;
	char mmm[15] = "minumum";


	char *wail = "unuseful";

	unsigned int ms = c_in_str(mmm,'m');
	unsigned int us = c_in_str(wail,'u');

	cout<< ms << " m character in " << mmm << endl ;
	cout<< us << " u character in " << wail << endl ;

	return 0 ;
}

unsigned int c_in_str(const char * str , char ch )
{
	unsigned int cont = 0;
	while(*str)
	{
		if( *str == ch )
		{
			cont++;
		}
		str++;
	}
	return cont ;
}
