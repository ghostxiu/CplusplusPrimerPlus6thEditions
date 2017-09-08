//修正placenew1.cc中的问题,注意与placenew1.cc对比
#include<iostream>
#include<new>
#include<string>


using namespace std ;
const int BUF =512 ;
class JustTesting{
private:
	string words;
	int number;
public:
	JustTesting(const string & s = "Just Testing",int n = 0)
	{ words = s , number = n ;cout << words << " , " << number << " constructed!\n";}
	~JustTesting(){cout << words << " Destroied!\n";}
	void show(){cout << words << " , " << number << endl;}
};
int main()
{
	char * buffer = new char[BUF];

	JustTesting *pc1 ,*pc2 ;
	pc1 = new (buffer) JustTesting;
	pc2 = new JustTesting("Heap1",10);

	cout << "Memory block address: \n" <<"buffer: "
		<< (void *) buffer << "   heap: " << pc2 << endl ;

	cout << "Memory contents : " << endl;
	cout << pc1 << ":" ;
	pc1 -> show();
	cout << pc2 << ":" ;
	pc2 -> show();


	JustTesting *pc3 , *pc4;
	pc3 = new (buffer+sizeof(JustTesting)) JustTesting("Bouysda",666);
	//pc3 = new (buffer+sizeof(*pc1)) JustTesting("Bouysda",666);//38行也可以使用这种形式
	pc4  =new JustTesting("Heap2",20);

	cout << "Memory contents : " << endl;
	cout << pc1 << ":" ;
	pc1 -> show();//使用了内存偏移，不会覆盖pc1数据,38行
	cout << pc2 << ":" ;
	pc2 -> show();
	cout << pc3 << ":" ;
	pc3 -> show();
	cout << pc4 << ":" ;
	pc4 -> show();

	//pc2 ->~JustTesting();
	//delete [] pc2 ;//用不匹配的 delete 会出错
	delete pc2 ;
	delete pc4 ;
	//delete pc1 ;//不能有效释放内存，因为申请的内存实际上在缓冲区内

	//显式的调用析构函数
	pc3 ->~JustTesting();
	pc1 ->~JustTesting();

	delete [] buffer;
	cout << "Done!\n";
	return 0;
}
