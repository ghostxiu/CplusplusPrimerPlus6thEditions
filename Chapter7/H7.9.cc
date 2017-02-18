//根据框架编写处数组和结构的函数
#include<iostream>
#include<string>//to use istream& getline (istream& is, string& str, char delim);
#include<cstring>// to use strlen();
using namespace std ;
const int SLEN = 30 ;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

//getinfo() has two arguments : a pointer to the first element of an array of student stuctrues
//and an array of student structrues and an int representing the number of elements of the array.
//The function solicits and stores data about students. It terminates input upon filling the array
//or upon encountering a blank line for the student name.
//The function returns the actural number of array elements filled.
int getinfo(student *st , int n);


//display1() takes a student structure as an argument an displays its contents
void display1(student st);


//display2() takes the address of student structure as an argument and displays the structure's contents
void display2(const student *st);


//display3() takes the address of the first elemen of an array of student structure and
//the number of array elements as arguments and displays the contents of the structures
void display3(const student *st , int n );



int main()
{
	cout << "Enter the class size:" ;
	int class_size ;
	cin >> class_size ;

	while(cin.get() != '\n')
		continue;
	student *ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu , class_size );
	cout << "entered : " << entered << endl ;
	cout << "Print twice:\n";
	for(int i = 0 ; i < entered ; ++i )
	{

		cout << "The " << i + 1 << " student:\n";
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu,entered);
	delete [] ptr_stu;
	cout << "Done.\n" ;

	return 0 ;
}


int getinfo(student *st , int n)
{
	int i = 0 ;
	char ch[SLEN] ;
	cout << "Enter the name of " << i+1 << " student:";
	//xxx-读取字符串数组时判别一个空行
	//使用cstring - strlen() 判别字符串长度是否为0
	while(cin.getline(st[i].fullname ,SLEN), i < n && strlen(st[i].fullname) != 0 )
	{
		cout << "Enter the hobby of " << i+1 << " student:";
		cin.getline(st[i].hobby,SLEN);
		cout << "Enter the ooplevel of " << i+1 << " student:";
		cin >> st[i].ooplevel;
		cin.get();
		i++;
		if(i < n ) cout << "Enter the name of " << i+1 << " student:";
	}
	return i;
}

void display1(student st)
{
	cout << "\nfullname:" << st.fullname ;
	cout << "\thobby:" << st.hobby;
	cout << "\tooplevel:" << st.ooplevel ;
}

void display2(const student *st)
{
	cout << "\nfullname:" << st->fullname ;
	cout << "\thobby:" << st->hobby;
	cout << "\tooplevel:" << st->ooplevel ;
}

void display3(const student *st , int n )
{
	cout << "\n\n\nPrint student Once:\n";
	for(int i = 0; i < n ; ++i)
	{
		cout << "The " << i + 1 << " student:\n";
		cout << "fullname:" << st[i].fullname ;
		cout << "\thobby:" << st[i].hobby;
		cout << "\tooplevel:" << st[i].ooplevel << endl ;
	}
}
