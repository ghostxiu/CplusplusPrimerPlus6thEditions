//values of expression
#include<iostream>
int main()
{
    using namespace std ;
    int x ;

    cout << "The expression x = 100 has the value " ;
    cout << (x = 100)  << endl;

    cout << "\nThe expression x > 3 has the value ";
    cout << (x > 3 ) << endl ;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3 ) << endl ;

    cout.setf(ios_base::boolalpha);//a newer C++ feature
    cout << "\nThe expression x > 3 has the value ";
    cout << (x > 3 ) << endl ;
    cout << "The expression x < 3 has the value ";
    cout << (x < 3 ) << endl ;

    return 0;
}
/*���� cout.setf(ios_base::boolalpha)
ͨ����C++ ����ʾ��������ǰ������ת��Ϊ0��1.
cout.setf(ios_base::boolalpha)
������һ��������ǣ��ñ������cout
��ʾtrue��false������0��1��
��ʽ��C++����Ҫ��ʹ��ios:boolalpha������
ios_base::boolalpha��Ϊcout.setf()��ֵ��


caution:C++��ֵ��ֵ�����������ϣ�ûһ�����ʽ
������ֵ��
*/

/*���ʽ����������
���ʽ�� age = 100
��䣺 age = 100 ;
���Ը����ʽ���Ϸֺž���һ����䡣
such as:
ak + 47 ;//vaild but useless
*/

/*�Ǳ��ʽ�����
int toad ����һ�����ʽ,
��Ϊ��û��ֵ����������������ǺϷ���䣺
eggs = int toad*1000;
cin >>��int toad ;

��for��丳ֵ��ѭ�������ǲ��Ϸ��ģ���Ϊ��û��ֵ
int x = for ( i = 0 ;  i <  5 ; i++ )//invaild
*/


