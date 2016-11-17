//line input
#include<iostream>
#include<string>
#include<cstring>
int main()
{
    using namespace std ;
    char charr[20];
    string str;


    cout << "Length of string in charr before input:"
         << strlen(charr) << endl
         << "Length of string in str bofore input:"
         << str.size() << endl;
    //strlen()检测遇到的第一个空字符为止，
    //对于未初始化的数组，数据是随机的，并有可能超过数组长度


    cout << "Enter a line of text:\n";
    cin.getline(charr,20);//indicate the maxium
    cout << "You entered " << charr << " \n";

    cout << "Enter another line of text:\n";
    getline(cin,str);//cin now an argument ,no length specifer
    cout <<"You entered :" << str << "\n";
    //getline原型为getline(&istream,&string,char)
    //getline(输入流,存储变量,读取结束字符(缺省为回车换行符))



    cout << "Length of string in charr after input: " << strlen(charr)
         << endl
         << "Length of string in str after input: " << str.size()
         <<endl;
    return 0;
}
