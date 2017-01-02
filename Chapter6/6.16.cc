#include<iostream>
#include<fstream>
#include<cstdlib> //support for exit()
const int Size = 60 ;
int main()
{
    using namespace std ;
    char filename[Size];
    ifstream inFile ; //object for handling file input
    cout << "Enter the name of data file: " ;
    cin.getline(filename,Size);
    inFile.open(filename); //associate inFile with a file
    if(!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl ;
        cout << "Program terminating .\n";
        exit(EXIT_FAILURE);
    }
    double value ;
    double sum = 0.0 ;
    int count = 0 ;
    inFile >> value ;
    while(inFile.good())//while input good and not EOF
    {
        ++count ;
        sum += value ;
        inFile >> value ;
    }

    if(inFile.eof())
    {
        cout << "End of file reached.\n";
    }

    else if(inFile.fail())
    {
        cout << "Input terminated by data mismatch.\n";
    }
    else
    {
        cout << "Input terminated for unknown reason.\n";
    }

    if(count == 0 )
    {
        cout << "No data processd.\n";
    }
    else
    {
        cout << "Items read : " << count << endl ;
        cout << "Sum: " << sum << endl ;
        cout << "Average: " << sum / count << endl ;
    }
    inFile.close();
    return 0 ;

    return 0;
}
