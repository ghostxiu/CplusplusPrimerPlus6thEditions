//reading more than one word with getline()
//getline()������ȡ���У���ʹ�ù�ͨ���س�������Ļ��з���ȷ������Ľ�β
#include<iostream>
using namespace std;
int main()
{
    const int ArSize = 20 ;
    char name[ArSize] ;
    char dessert[ArSize] ;


    cout << "Please enter your name:\n";
    cin.getline(name,ArSize);
    cout << "Then enter your favorite dessert:\n";
    cin.getline(dessert,ArSize);

    cout << "I have some delicious " << dessert
         << " for you , " << name << endl;
    return 0;
    }
//getline()����ÿ�ζ�ȡһ�У���ͨ�����з���ȷ����β��
//�������滻�з����෴���ڴ洢�ַ���ʱ��
//���ÿ��ַ������滻��β��
