//defing ,protoyping and calling a function
//�����Ķ��壬������ԭ�ͣ����ú���
#include<iostream>
void simple();//�����Ķ��� defining simple() function

int main()
{
    using namespace std ;
    cout << "main() will call the simple() function.\n";
     simple();
     //main() calling simple() function.
    cout << "main() is finished the simple() function.\n";
    return 0 ;
}
void simple ()
{
    //simple() protyping
    std::cout << "This is a simple function.\n";
}
