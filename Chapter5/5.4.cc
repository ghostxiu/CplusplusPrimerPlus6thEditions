//more looping with for
#include<iostream>
const int ArSize = 16 ;//example of extern declaration
int main()
{
    long long  * factorials = new long long[ArSize];
    factorials[0] = factorials[1] = 1;
    for(int i = 2 ; i < ArSize ; i++ )
    {
        factorials[i] = i * factorials[i-1];
    }
    for(int i = 0 ; i < ArSize ; i++)
        std::cout << i << " != "<< factorials[i] << std::endl;

    return 0;
}
/*ʹ�� �ⲿconst �ĺô�
1.���������
2.���ų������ܸı�
*/
