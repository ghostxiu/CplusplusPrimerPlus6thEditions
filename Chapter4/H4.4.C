/*
先输入姓，后输入名，
使用一个逗号和空格将姓名组合起来
使用char和cstirng中的函数
*/
#include<iostream>
#include<string>
using namespace std ;
int main()
{
    string fname;
    string lname;
    cout << "Enter your First name: " ;
    getline(cin,fname);
    cout << "Enter your Last name : " ;
    getline(cin,lname);
    string x ;
    x.assign(lname);//same as strcpy(x,lname); in cstring
    x.append(", ");//append ,same as strcat(x,","); in cstring
    x.append(fname);
    cout << "Here's information in a single string :" << x << endl;
    return 0;
}
//all string method in  cpluscplus.com
