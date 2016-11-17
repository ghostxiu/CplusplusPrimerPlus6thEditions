//using the C++ string class
#include<iostream>
#include<string>
int main()
{
    using namespace std ;
    char charr1[20] = "jaguar" ;
    char charr2[20] ; //create an empty array
    string str1;
    string str2 =  "pather";
    // C++ 11可以这么初始化 string str2 {"pather"}; 或者 string str2 = {"pather"};

    cout << "Enter a kind of felines : " ;
    cin >> charr2 ;
    cout << "\nEnter another kind of felines :";
    cin >> str1 ;

    cout << "Here are some felines : \n"
         << charr1 << " " << charr2 << " "
         << str1 << " " << str2 << "\n" ;

    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << ".\n" ;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << ".\n";

    return  0;
}
