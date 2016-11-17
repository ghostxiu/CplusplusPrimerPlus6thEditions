//assigning ,adding and appending
#include<iostream>
#include<string>
int main()
{
    using namespace std ;
    string s1 , s2 ,s3 ;
    s1 = "penguin";

 //string可以直接传值
    cout << "You can assign one string to another: s2 = s1\n";
    s2 = s1 ;
     //用C方法为string赋值
    cout << "s1 : " << s1 << "   s2: " << s2 << "\n";
    cout << "You can assign a C-style string to a string object.\n";
    cout << "s2 = \"buzzard\" " << endl;
    s2 = "buzzard";
    cout << "s2: " << s2 << endl ;
    //两个string类的拼接
    cout << "You can concatenate strings: s3 = s1 + s2\n";
    s3 = s1 + s2 ;
    cout << "s3:" << s3 << endl ;
    cout << "You can append strings.\n";
    //将一个string加到另一个string的尾部
    s1+= s2 ;
    cout << "s1 += s2 yields s1  = " << s1 << endl;
    //将一个字符串加到string的尾部
    s2 += "for a day";
    cout << "s2 += \"for a day \" yields  s2 = " << s2 << endl;
    return 0 ;
}
