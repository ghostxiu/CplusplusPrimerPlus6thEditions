//读取文本文件并指出其有多少个字符
#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std ;
const int size = 15 ;
int main()
{
    ifstream inFile;
    string filename;
    cout << "enter the file name:";
    getline(cin,filename);
    inFile.open(filename);
    if(!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl ;
        cout << "Program terminating .\n";
        exit(EXIT_FAILURE);
    }
    char ch ;
    int count = 0 ;
    inFile >> ch;
    while(inFile.good())
    {
        count++;
        inFile >> ch;
    }
    inFile.close();
    cout << "There are " << count << " charater in "<< filename << ".\n";
    return 0 ;
}
