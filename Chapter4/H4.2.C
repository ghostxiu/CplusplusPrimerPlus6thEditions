//reading more than one word with getline()
//getline()������ȡ���У���ʹ�ù�ͨ���س�������Ļ��з���ȷ������Ľ�β
//�޸�4.4����char���黻��string��
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
//getline()����ÿ�ζ�ȡһ�У���ͨ�����з���ȷ����β��
//�������滻�з����෴���ڴ洢�ַ���ʱ��
//���ÿ��ַ������滻��β��
