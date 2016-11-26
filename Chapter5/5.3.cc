//values of expression
#include<iostream>
int main()
{
    using namespace std ;
    int x ;

    cout << "The expression x = 100 has the value " ;
    cout << (x = 100)  << endl;

    cout << "\nThe expression x > 3 has the value ";
    cout << (x > 3 ) << endl ;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3 ) << endl ;

    cout.setf(ios_base::boolalpha);//a newer C++ feature
    cout << "\nThe expression x > 3 has the value ";
    cout << (x > 3 ) << endl ;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3 ) << endl ;

    return 0;
}
/*关于 cout.setf(ios_base::boolalpha)
通常，C++ 在显示布尔变量前把他们转化为0和1.
cout.setf(ios_base::boolalpha)
调用了一个函数标记，该标记命令cout
显示true和false而不是0和1。
老式的C++可能要求使用ios:boolalpha而不是
ios_base::boolalpha做为cout.setf()的值。


caution:C++是值或值与运算符的组合，没一个表达式
都必有值。
*/

/*表达式和语句的区别：
表达式： age = 100
语句： age = 100 ;
所以给表达式加上分号就是一条语句。
such as:
ak + 47 ;//vaild but useless
*/

/*非表达式和语句
int toad 不是一个表达式,
因为它没有值，下面的两条都不是合法语句：
eggs = int toad*1000;
cin >>　int toad ;

将for语句赋值给循环变量是不合法的，因为它没有值
int x = for ( i = 0 ;  i <  5 ; i++ )//invaild
*/


