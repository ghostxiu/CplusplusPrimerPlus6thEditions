//using the delete operate
//作为返回值的动态数组空间回收
//以及使用strcpy节省空间
#include<iostream>
#include<cstring>
using namespace std ;
char * GetName();
int main()
{
    char *name;
    name = GetName();
    cout << name << " at " << (int *)name << "\n";
    delete [] name ;

    name = GetName();
    cout << name << " at " << (int *)name << "\n";
    delete [] name ;
    return 0;
}
char * GetName()
{
    char temp[80];
    cout << "Enter the name:\n";
    cin >> temp;
    char * pn = new char[strlen(temp)+1];
    strcpy(pn,temp);//copy string in a smaller space
    return pn;


}
