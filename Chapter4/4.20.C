//using points to block of 10 ints
#include<iostream>
#include<cstring>//declare strlen(),strcpy()
int main()
{
    using namespace std;
    char animal[20] = "bear";
    const char * bird = "wren" ;
    //�ַ���������ֵ�ǳ��������Դ˴�ʹ��const
    //����bird���ʣ����ǲ����޸���
    char *ps ;

    cout << animal << " and " ;
    cout << bird << endl;

    //cout << ps << endl ;//may display garbage , may cause a cash

    cout << "Enter a kind of animal: ";//set ps to point to sting
    cin >> animal ;
    //cin >> ps ; //too horrible  a blunder to try ;
    //ps dosent point to allocated space

    ps = animal ; //set ps to point to string
    cout << ps << endl ;//OK ��same as using animal
    cout << "Before using strcpy():"<<endl;
    cout << animal << " at " << (int *) animal << endl ;
    cout << ps << " at " <<(int *) ps << endl ;

    ps = new char[strlen(animal)+1];//get new storage
    //������ַ������������ռ䣬strlenȷ���ַ�������
    //��ԭ����+1���ַ������������¿ռ�
    strcpy(ps,animal);//copy string to new adress
    cout <<"After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << &ps << endl;
    //ʹ��strcpy()��new()������� ��������animal�ĸ���



    return 0;
}
/*��cout�Ͷ���C++����ʽ�У�char��������charָ���Լ���
����������ַ���������������Ϊ�ַ����ĵ�һ�ַ��ĵ�ַ
*/
/*
1.��Щ������ǿ�ַ���������ֵ��Ϊֻ��������
��ͼ�޸Ľ��������н׶δ���C++��Ϊ����
2.��Щ������ֻ���ַ�������ֵ��һ��������
��ʾ���������еĸ�����ֵ��
*/

//caution��Ҫʹ��strcpy()��strncpy()�������Ǹ�ֵ��������ַ�����������

