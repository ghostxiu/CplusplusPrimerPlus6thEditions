//指针和const
#include<iostream>
const int ArSize = 8 ;
int sum_arr(const int *begin,const int *end);
int main()
{
	using namespace std ;
	int cookie[ArSize]= {1,2,4,8,16,32,64,128};


	int sum = sum_arr(cookie,cookie+3);
	cout << "First three ate " << sum << " cakes.\n";

	sum = sum_arr(cookie+4,cookie+8);
	cout << "Last four ate " << sum << " cakes.\n" ;


	return 0 ;
}

int sum_arr(const int *begin,const int *end)
{
	const int *pt ;
	int total = 0;
	for( pt = begin ; pt != end ; ++pt)
	{
		total += *pt ;
	}
	return total ;
}
/*尽可能的使用const
1.可以避免无意间修改数据而导致编程错误
2.使用const使得函数能后处理const 和 非 const实参，否则将只能接收非const实参.


ex:
	int keep = 266 ;
	int * t1 = &keep;
	const int *t2 = t1 ;
	int * const t3 = &keep ;
	t2防止修改指针指向元素的值
	t3防止修改指针的值,但可以改变t3指向元素的值
	//t3 is a read only varaible
	实验程序：test/test_const.cc
*/
