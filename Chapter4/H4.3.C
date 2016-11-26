/*
先输入姓，后输入名，
使用一个逗号和空格将姓名组合起来
使用char和cstirng中的函数
*/
#include<iostream>
#include<cstring>
using namespace std ;
int main()
{
    char fname[20];
    char lname[20];
    cout << "Enter your First name: " ;
    cin.getline(fname,20);
    cout << "Enter your Last name : " ;
    cin.getline(lname,20);
    char *x = new char[strlen(fname)+strlen(lname)+3];
    strcpy(x,lname);//copy
    strcat(x,",");//append
    strcat(x,fname);
    cout << "Here's information in a single string :" << x << endl;
    return 0;
}
