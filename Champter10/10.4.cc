//用类重写9.4
#include"use_sales.h"
using namespace SALES;


int main()
{
	using namespace std ;
	double ar[QUARTERS] = {6.5,7,9,8};
	Sales A(ar,QUARTERS);
	Sales B;
	B.setSales();
    cout << "\n\n\nDone!" << endl;
    return 0;
}

