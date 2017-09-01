//随机漫步者程序，根据11.1.cc改编
//包含vect.cc和vect.h
//报告N次中测试中的最低，最高和平均步数
#include"vect.cc"
#include<cstdlib>
#include<ctime>



using std::cout ;
using std::cin;
using std::endl;


int main()
{
	Vector step;
	Vector result(0.0,0.0);
	double x_way ;
	double y_way ;
	double target;
	double foot;
	bool tag = false;
	unsigned long steps = 0 ;
	srand(time(0));
	unsigned long max_s , min_s , avg_s ;//最大，最小和平均步数
	int n ;//测试次数N;
	cout << "Please enter the test times:";
	cin >> n ;
	int p = n ;
	cout << "Enter the target:";
	cin>>target;
	cout << "Enter the foot longer:";
	cin>>foot;
	cout << "Target Distance: " << target<<", Step Size : "<<foot;
	while(p--)
	{
		while(result.magval()<target)
		{
			x_way = rand()%int(foot);
			y_way = rand()%int(foot);
			step.reset(x_way,y_way);
			result = result + step;
			steps++;
		}
		cout << "\nAfter " << steps <<"steps, the subject has the following location:\n";
		cout << result;
		if(!tag)
		{
			max_s = min_s = steps;
			tag = true;
			avg_s = 0 ;
		}
		else
		{
			if(steps > max_s)
				max_s = steps ;
			if(steps < min_s)
				min_s = steps;
		}

		avg_s += steps;
		steps = 0;
		result.reset(0.0,0.0);
	}

	cout << "\n\nAfter " << n << " times test, we can see:\n"
		<< "max footstep is : " << max_s
		<< ",min footstep is : " << min_s
		<<"\n the average is : " << avg_s/n << endl;
	cout << "\n\n\n.....end.....\n";


	return 0;
}
