//defing ,protoyping and calling a function
//函数的定义，函数的原型，调用函数
#include<iostream>
void simple();//函数的定义 defining simple() function

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
