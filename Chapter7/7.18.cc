//函数指针示例
#include<iostream>
double besty(int);
double pam(int);

void estimate(int lines , double (*pf)(int));

int main()
{
	using namespace std;
	int code ;
	cout << "How many lines of code do you need?";
	cin >> code ;
	cout << "Here's the Besty's estimate:\n";
	estimate(code,besty);
	cout << "Here's the Pam's estimate:\n";
	estimate(code,pam);

	return 0 ;
}

double besty(int lns )
{
	return 0.05*lns ;
}

double pam(int lns)
{
	return 0.03*lns + 0.0004 * lns * lns ;
}

void estimate(int lines , double (*pf)(int))
{
	using namespace std ;
	cout << lines << " lines will take " ;
	cout << (*pf)(lines) <<" hour(s)\n" ;

}


/*
	函数指针和指针函数
	函数指针：指向函数的指针（本质是指针）
	double (*pf) (int);
	指针函数：返回值是指针的函数（本质是函数)
	double *pf (int);

*/
