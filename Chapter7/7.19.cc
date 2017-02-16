//关于函数指针和C++11的自动推断功能
#include<iostream>

const double *f1(const double ar[],int n );
const double *f2(const double [] , int n );
const double *f3(const double *  , int n );

int main()
{
	using namespace std ;
	double av[3] = {1112.3,1532.3,2227.9};

	//point to a function （指向函数的指针)
	const double *(*p1)(const double * , int ) = f1 ;

	//C++11 automatic type deduction  C++11的自动推断
	auto p2 = f2 ;
	cout << "Using pointers to functions: \n" ;
	cout << "Adress   value \n";
	cout << (*p1)(av,3) << ": " << *(*p1)(av,3) << endl ;
	cout << p2(av,3) << ": " << *p2(av,3) ;
	//这里  (*p1)(av,3)  和 p1(av,3) 这两种
	//调用方式是等价的，具体见书P243页中段

	//pa an array of pointers (pa 是一个指针数组）
	//auto doesnt work for list initialization 自动推断不能用于列表声明
	const double *(*pa[3])(const double * , int ) = {f1,f2,f3} ;
	//but it does work to a single value
	//pb is a pointer to first element of pa
	auto pb = pa ;
	//pre-C++11 can use the following code instead
	//const double * (**pb)( const double * , int ) = {f1,f2,f3} ;

	cout << "\nUsing an array of pointers to functions:\n" ;
	cout << "Address    Value \n";
	for (int i = 0 ; i < 3 ; ++i)
	{
		cout << pa[i](av,3) << ": " << *(*pa[i])(av,3) <<endl ;
	}

	cout << "\nUsing a pointer to pointer to a functions:\n";
	cout << "Address    Value \n";
	for (int i = 0 ; i < 3 ; ++i)
	{
		cout << pb[i](av,3) << ": " << *pb[i](av,3) <<endl ;
	}


	//What about a pointer to an array of function pointers
	//使用一个指向包含 函数指针 的数组 的指针
	cout << "\nUsing pointers to an array of  pointers: \n";
	cout << "Address    Value\n";

	//easy way to declare pc
	auto pc = &pa ;
	// pre-C++11 can use  the following code instead
	//const double *(*(*pc)[3])(const double *,int ) = &pa ;
	cout << (*pc)[0](av,3) << ": " << *(*pc)[0](av,3) << endl ;
	//hard way to declare pd
	const double *(*(*pd)[3])(const double * , int ) = &pa;
	// store return value in pdb
	const  double * pdb = (*pd)[1](av,3);
	cout << pdb << ": " << *pdb << endl ;
	//alternative notation
	cout << (*(*pd)[2])(av,3) << ": " << *(*(*pd)[2])(av,3) << endl ;
	//cin.get();
	return 0 ;

}

const double *f1 (const double *ar , int n )
{
	return ar ;
}
const double *f2(const double ar[] , int n )
{
	return ar + 1 ;
}
const double *f3(const double ar[] ,int n )
{
	return ar + 2 ;
}


/* C++11的自动类型推断功能
	1.声明变量时简化代码（同时赋值）
	2.只能用于单值初始化，不适用于初始化列表
*/

/* 使用typedef 进行简化
typedef double *(*p_fun)(const double * ,int);
p_fun = f1 ;
p_fun pa[3] = {f1,f2,f3} ;
p_fun (*pd)[3] = &pa ;
*/

