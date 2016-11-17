//more string class feature
#include<iostream>
#include<string>//make string class availabe
#include<cstring>
int main()
{
    using namespace std;
    char charr1[20] ;
    char charr2[20] = "jaguar";
    string str1 ;
    string str2 = "panther" ;

    //assignment for string objects and character arrays
    str1 = str2 ; //copy str2 to str1
    strcpy(charr1,charr2); // copy charr2 to charr1

    //appending  for string objects and character arrays
    str1 += " paste" ; // add " paste" end of str1
    strcat(charr1," juice"); // add " juice" end of charr1

    // finding the length of a string object an  a  character array
    int len1 = str1.size(); //obtain lenth to str1
    int len2 = strlen(charr1) ; //obtain length to charr1

    cout << "The string " << str1 << " cotains "
         << len1 << " characters.\n";

    cout << "The string" << charr1 << " contains "
         << len2 << " characters.\n";
    return 0;
}
//C-风格的字符串和C++的对比
