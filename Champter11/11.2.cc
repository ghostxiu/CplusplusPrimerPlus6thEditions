//随机漫步者程序，根据11.1.cc改编
//包含vect_1.cc和vect_1.h
//修改不再存储矢量的角度和长度，而是在magval()和angval()被调用时计算
#include"vect_1.cc"
#include<cstdlib>
#include<ctime>
#include<fstream>


using std::cout ;
using std::cin;
using std::endl;
using std::ofstream;



int main()
{
	Vector step;
	Vector result(0.0,0.0);
	double x_way ;
	double y_way ;
	double target;
	double foot;
	unsigned long steps = 0 ;
	srand(time(0));
	ofstream op ;
	op.open("walk.txt");
	cout << "Enter the target(q to quit):";
	while(cin >> target)
	{
		cout << "Enter the foot longer:";
		if(!(cin>>foot))
		{
			break;
		}
		op << "Target Distance: " << target<<", Step Size : "<<foot;
		op << steps << ": " << result ;
		while(result.magval()<target)
		{
			x_way = rand()%int(foot);
			y_way = rand()%int(foot);
			step.reset(x_way,y_way);
			result = result + step;
			op << steps << ": " << result ;
			steps++;
		}

		op << "After " << steps <<"steps, the subject has the following location:\n";
		op << result;
		op <<"or \n(m,a) = (" << result.magval()<< ","<<result.angval()/Rad_to_deg<<")\n";
		double avg = result.magval()/steps;
		op << "Average outward distance per steps = " << avg <<endl ;
		steps = 0;
		result.reset(0.0,0.0);
		cout << "\nEnter target (q to quit): ";
	}

	cout << "\n\n\n.....end.....\n";


	return 0;
}
