//using clock() in a time delay loop
#include<iostream>
#include<ctime>//describe clock() function ,clock_t type()
int main()
{
    using namespace std;
    cout << "Enter the delay time , in seconds: ";
    float secs ;
    cin>>secs ;
    clock_t delay = secs * CLOCKS_PER_SEC ;//covert to clock_t ;
    cout << "starting \a\n";
    clock_t start = clock();
    while(clock() - start < delay )
        ;//分开，不然会包含下一句
    cout << "done \a \n ";
    return 0 ;
}
/* 说明
ctime 头文件中  有个常量CLOCK_PER_SEC
，等于没表包含的系统时间单位数
用系统时间除以这个值可以得到秒数
ctime 将clock_t作为 clock（）的返回类型的别名
所以可以将变量声明为clock_t 类型，
编译器将它转化为long ，unsign int 等适合系统的类型
*/
