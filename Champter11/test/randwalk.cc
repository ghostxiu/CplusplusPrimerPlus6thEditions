//随机漫步程序，依赖vector.cc和vect.h
#include <fstream>
#include "vector.cc"
#include <cstdlib>
#include <ctime>

using std::cout ;
using std::endl;
using std::cin;
using std::ofstream;
using VECTOR::Vector;

int main()
{
	srand(time(0));//创建随机数种子
	double direction ;
	Vector result(0.0,0.0);
	Vector step;
	unsigned long steps = 0;

	double target ;
	double dstep;
	ofstream fout;
	fout.open("walk.txt");
	cout << "Enter the target ,(q to quit):";
	while(cin >> target)
	{
		cout << "Enter the step length:";
		if(!(cin >> dstep))
		{
			break;
		}
		while(result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep,direction,Vector::POL);
			result = result + step;
			steps++;
		}
			cout << "After " << steps << " steps, the subject "
				<<"has the following location:\n";
			cout << result << endl ;
			fout << result <<endl ;
			result.polar_mode();
			cout << " or\n" << result <<endl ;
			cout << "Average outward distance per step = "
				<< result.magval()/steps <<endl ;


			fout << " or\n" << result <<endl ;
			fout << "Average outward distance per step = "
				<< result.magval()/steps <<endl ;

			steps = 0;
			result.reset(0.0,0.0);
			cout << "Enter the distance (q to quit): ";
	}
	cout << "Bye!\n";
	cin.clear();
	while(cin.get() != '\n')
		continue;
	fout.close();

	return 0;
}
