//using the new operator for arrays
//��̬����
#include<iostream>
int main()
{
    using namespace std ;

    double * p3 = new double [3];

    p3[0] = 0.2;
    p3[1] = 0.01;
    p3[2] = 1.2 ;

    cout << "p3[0]  = " << p3[0] <<endl;
    cout << "p3[1]  = " << p3[1] << endl;
    cout << "p3[2]  = " << p3[2] << endl ;

    delete [] p3;

    return 0 ;
}
/*ʹ��new��delete��̬�����ڴ�ʱ��ע�⣺
1.��Ҫʹ��delete���ͷŲ���new������ڴ�
2.��Ҫʹ��delete���ͷ�ͬһ���ڴ������
3.���ʹ��new[]ά��������ڴ棬��Ӧʹ��delete[]���ͷ�
4.���ʹ��new[]��Ϊһ��ʵ������ڴ棬��Ӧʹ��delete(û�з�����)���ͷ��ڴ�
5.�Կ�ָ��ʹ��delete�ǰ�ȫ��
*/
