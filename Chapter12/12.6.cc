//Changed by Ghostxiu 2017/9/18
//模拟银行排队 改自原书，用两个队列实现
//包括文件 queue.h queue.cc
#include "queue.cc"

#include <ctime>


using namespace std ;
const int MIN_PER_HR = 60;


bool newcustomer(double x)
{
    return (rand() * x / RAND_MAX < 1);
}

int main( )
{

    srand(time(nullptr)));

    cout << "Case Study : Bank of Heather Automatic Teller\n";


    cout << "Enter maximum size of queue : ";
    int qs;
    while(cin >> qs)
	{



		Queue line_1(qs), line_2(qs);

		cout << "Enter the number of simulation hours : ";
		int hours;
		cin >> hours;

		long cyclelimit = MIN_PER_HR * hours;

		cout << "Enter the average number of customers per hour : ";
		double perhour;

		cin >> perhour;
		double min_per_cust;
		min_per_cust = MIN_PER_HR / perhour;


		Item temp[2];
		long turnaways = 0;
		long customers = 0;
		long served = 0;
		long sum_line = 0;
		int wait_time[2] = {0};
		long line_wait = 0;


		for(int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if(newcustomer(min_per_cust))
			{
				if(line_1.isfull() && line_2.isfull())
				{
					turnaways++;
				}
				else if(line_1.queuecount() < line_2.queuecount())
				{
					customers++;
					temp[0].set(cycle);
					line_1.enqueue(temp[0]);
				}
				else
				{
					customers++;
					temp[1].set(cycle);
					line_2.enqueue(temp[1]);
				}
			}

			if(wait_time[0] <= 0 && !line_1.isempty())
			{
				line_1.dequeue(temp[0]);
				wait_time[0] = temp[0].ptime();
				line_wait += cycle - temp[0].when();
				served++;
			}
			if(wait_time[1] <= 0 && !line_2.isempty())
			{
				line_2.dequeue(temp[1]);
				wait_time[1] = temp[1].ptime();
				line_wait += cycle - temp[1].when();
				served++;
			}

			if(wait_time[0] > 0)
			{
				wait_time[0]--;
			}
			if(wait_time[1] > 0)
			{
				wait_time[1]--;
			}
			sum_line += (line_1.queuecount() + line_2.queuecount());
		}


		if(customers > 0)
		{
			cout << "Customers accepted : " << customers << endl;
			cout << "  customers served : " << served << endl;
			cout << "         turnaways : " << turnaways << endl;
			cout << "average queue size : ";
			cout.precision(2);
			cout.setf(ios_base::fixed, ios_base::floatfield);
			cout << (double) sum_line / cyclelimit / 2 << endl;
			cout << "average wait time : " << (double)line_wait / served << " minutes\n";
		}
		else
		{
			cout << "No customers!\n";
		}
		if((double)line_wait / served == 1)
		{
			break;
		}
    	 cout << "Enter maximum size of queue : ";
	}
    cout << "Done!\n";

    return 0;
}
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter12/
