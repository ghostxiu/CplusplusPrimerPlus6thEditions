//reading more than one word with getline()
//getline()函数读取整行，它使用沟通过回车键输入的换行符来确定输入的结尾
//修改4.4，将char数组换成string类
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name ;
    string dessert;


    cout << "Please enter your name:\n";
    getline(cin,name);//or use char[];
    cout << "Then enter your favorite dessert:\n";
    getline(cin,dessert);

    cout << "I have some delicious " << dessert
         << " for you , " << name << endl;
    return 0;
    }
//getline()函数每次读取一行，他通过换行符来确定行尾，
//但不保存换行符。相反，在存储字符串时，
//他用空字符串来替换行尾。

