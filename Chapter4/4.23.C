#include<iostream>
using namespace std;

struct antartica_years_end
{
    int year;
    //some really interesting data ,etc.*/
};

int main()
{
    antartica_years_end s01,s02,s03;
    s01.year = 1998;
    antartica_years_end * pa = &s02 ;
    pa->year = 1999 ;
    antartica_years_end trio[3];

    trio[0].year = 2003 ;
    std::cout << trio->year << std::endl;

    const antartica_years_end  * arp[3] = {&s01,&s02,&s03};
    std::cout << arp[1]->year << std::endl;

    const antartica_years_end ** ppa = arp ;
    //创建数组的指针，arp是一个数组名称,是第一个元素的地址
    //ppa是一个指针,指向一个antartica_years_end 。
    auto ppb = arp ;//C++11 automatic type dedution
    //C++11 自动推断类型
    //or else use const antarctia_years_end ** ppa ppb = arp
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb+1))->year << std::endl;

    return 0 ;
}
