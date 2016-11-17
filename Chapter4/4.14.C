//using the  & operator to find address
#include<iostream>
int main()
{
    int donuts = 6 ;
    double cups = 4.5;

    std::cout << "donuts value = " << donuts << std::endl;
    std::cout << "donuts address = " << &donuts << std::endl ;

    std::cout << "cups value = " << cups << std::endl ;
    std::cout << "cups address = " << &cups << std::endl;
    return 0 ;

}


/*计算机存储数据时必须跟踪的三种属性：
信息存储在何处;
存储的值为多少;
存储的信息是什么类型。
*/
