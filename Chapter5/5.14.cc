//using clock() in a time delay loop
#include<iostream>
#include<ctime>//describe clock() function ,clock_t type()
int main()
{
    using namespace std;
    cout << "Enter the delay time , in seconds: ";
    float secs ;
    cin>>secs ;
    clock_t delay = secs * CLOCKS_PER_SEC ;//covert to clock_t ;
    cout << "starting \a\n";
    clock_t start = clock();
    while(clock() - start < delay )
        ;//�ֿ�����Ȼ�������һ��
    cout << "done \a \n ";
    return 0 ;
}
/* ˵��
ctime ͷ�ļ���  �и�����CLOCK_PER_SEC
������û�������ϵͳʱ�䵥λ��
��ϵͳʱ��������ֵ���Եõ�����
ctime ��clock_t��Ϊ clock�����ķ������͵ı���
���Կ��Խ���������Ϊclock_t ���ͣ�
����������ת��Ϊlong ��unsign int ���ʺ�ϵͳ������
*/
