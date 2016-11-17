//using the new operator for arrays
//动态数组
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
/*使用new和delete动态处理内存时的注意：
1.不要使用delete来释放不是new分配的内存
2.不要使用delete来释放同一个内存块两次
3.如果使用new[]维数组分配内存，则应使用delete[]来释放
4.如果使用new[]来为一个实体分配内存，则应使用delete(没有方括号)来释放内存
5.对空指针使用delete是安全的
*/

