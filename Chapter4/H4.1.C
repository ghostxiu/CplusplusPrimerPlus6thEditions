/*按如下提示显示信息：
What is your first name ?Betty Sue
What is your last name ? Yewe
What is your grade do you deserve? B
What is your age ? 22
Name : Yewe , Betty Sue
Grade : C
Age:22
*/
#include<iostream>
#include<string>
int main()
{
    using namespace std;
    cout << "What is your first name ? ";
    char fname[20];
    cin.get(fname,20) ;
    cin.get();
    cout << "What is your last name ? ";
    string lname;
    cin >> lname ;
    cout << "What is your grade do you deserve ? ";
    char c1 ;
    cin >> c1 ;
    char c2 = c1 +1 ;
    cout << "What is your age ? ";
    int age ;
    cin >> age ;

    cout << "Name : " << fname << " , " << lname << endl ;
    cout << "Grade : " << c2 << endl;
    cout << "Age : " << age << endl;
    return 0 ;
}
