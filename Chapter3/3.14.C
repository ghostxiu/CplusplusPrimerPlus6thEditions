#include<iostream>
int main()
{
    using namespace std ;
    int auks , bats , coots ;

    //the following statement adds the values as doublie ,
    //the converts the results to int

    auks = 19.99 + 11.99 ;//先相加后转化


    //three values add value as int
    bats = int(11.99)+int(19.99);   //new  C++ syntax
    coots = (int) 11.99 + int(19.99); // Old  C  syntax
    cout << "auks = " <<auks << ", bats = " << bats << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch <<" is " //printf as char
         << int(ch) << endl               //printf as int
         << "Yes , the code is "
         <<static_cast<int>(ch)<<endl ; // using static_cast

    cin.get();
    cin.get();
    return 0;

}
