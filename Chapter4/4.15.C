//&ȡַ��*ȡֵ
//our first  pointer varible
#include<iostream>
int main()
{
    using namespace std;

    int update = 6 ;
    int *p_update; //declear pointer to an int
    p_update = &update; //assign address of int to pointer

    //express value two ways
    cout << "Values: update = " << update ;
    cout << ",*p_update = " << *p_update << endl;

    //erepress adress two ways
    cout << "Address : &update = " << &update ;
    cout << ",p_update = " << p_update << endl;

    //use pointer to change value
    *p_update = *p_update + 1 ;
    cout << "Now update = " << update << endl ;
    return 0 ;

}
