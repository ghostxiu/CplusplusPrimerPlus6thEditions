//Changed by Ghostxiu 2017/9/15
//原书程序清单14.1内容 has-a 继承
#include "student.cc"
using std::cout ;
using std::cin ;
void set(Student & sa , int n );
const int pupils = 3 ;
const int quizzes = 5 ;


int main()
{
	Student ada[pupils] =
	{
		Student(quizzes),Student(quizzes),Student(quizzes)};

	for (int i = 0 ; i < pupils ; ++i)
	{
		set(ada[i],quizzes);
	}
	cout << "\nStudent List:\n";
	for(int i = 0 ; i < pupils ; ++i)
	{
		cout << endl  << ada[i];
		cout << "Avarage: " << ada[i].Average() <<endl;
 	}
 	cout << "Done!\n" ;

	return 0;
}


void set(Student & sa , int n)
{
	cout << "Please enter the student's name: " ;
	getline(cin,sa);
	cout << "Please Enter "<<n<<" quiz scores:\n ";
	for(int i = 0 ; i< n ; ++i)
	{
		cin >> sa[i];
	}
	while(cin.get() != '\n')
		continue ;

}

//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter14/test
