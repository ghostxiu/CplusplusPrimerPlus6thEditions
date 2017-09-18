//Changed by Ghostxiu 2017/9/18
//模拟银行排队 改自原书
//包括文件 queue.h queue.cc
#include<ctime>
#include"queue.cc"
using std::cout ;
using std::cin;
using std::endl;

const int MIN_PER_HR = 60;

bool newcustomer(double x);


int main()
{
	srand(std::time(nullptr));
	cout << "Case Study: Bank of Heather Automatic Teller\n";

	int qs;

	cout << "Enter maximum size of queue: ";
	while(cin >> qs)
	{
		Queue line(qs);
		cout << "Enter the number of simulation hours: ";
		int hours;
		cin >> hours;
		long cyclelimit = MIN_PER_HR * hours;

		cout << "Enter the average number of customers per hour: ";
		double perhour;
		cin >> perhour;
		double min_per_cust;
		min_per_cust = MIN_PER_HR / perhour;

		Item temp;
		long turnaways = 0;
		long customers = 0;
		long served = 0;
		long sum_line = 0;
		int wait_time = 0;
		long line_wait = 0;

		for (int cycle = 0; cycle < cyclelimit; ++cycle)
		{
			if (newcustomer(min_per_cust))
			{
				if (line.isfull())
					++turnaways;
				else
				{
					++customers;
					temp.set(cycle);
					line.enqueue(temp);
				}
			}
			if (wait_time <= 0 && !line.isempty())
			{
				line.dequeue(temp);
				wait_time = temp.ptime();
				line_wait += cycle - temp.when();
				++served;
			}
			if (wait_time > 0)
				--wait_time;
			sum_line += line.queuecount();
		}

		if (customers > 0  && ((double)line_wait / served == 1))
		{
			std::cout << "customers accepted: " << customers << std::endl;
			std::cout << " customers serverd: " << served << std::endl;
			std::cout << "     turnaways: " << turnaways << std::endl;
			std::cout << "average queue size: ";
			std::cout.precision(2);
			std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
			std::cout << (double)sum_line / cyclelimit << std::endl;
			std::cout << " average wait time: " << (double)line_wait / served << " minutes  \n";
			break;
		}
		else if(customers <= 0)
		{
			std::cout << "No customers!\n";
		}
		else
		{
			cout << "wait time do not pare to 1.\n";
			if((double)line_wait / served  > 1)
			{
				cout << "Average wait time is "<< (double)line_wait / served << " > 1 .\n" ;
			}
			else
			{
				cout << "Average wait time  is "<< (double)line_wait / served << " < 1 .\n" ;
			}
		}
		cout << "Enter maximum size of queue: ";
	}
	std::cout << "Done!\n";

	return 0;
}

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}


//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12/test
