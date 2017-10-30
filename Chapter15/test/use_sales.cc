//Changed by Ghostxiu 2017/10/25
//原书程序清单15.16  内容
//异常、类和继承
//stdexcept
//包括 sales.h sales.cc use_sales.cc
#include <iostream>
#include "sales.cc"

int main()
{
	using std::cin ;
	using std::endl;
	using std::cout ;

	double vals1[12] =
	{
		1220 , 1100 , 1122 , 2212 ,1232 , 2334 ,
		2884 , 2393 , 3302 , 2922 ,3002 , 3544
	};

	double vals2[12] =
	{
		12 , 11 , 22 , 21 , 32 ,34 ,
		28 , 29 , 33 , 28 , 33 , 24
	};

	Sales sales1(2011,vals1,12);
	string s = "Blogstar" ;
	//此处C++不接受将临时变量转为const string & 型,所以需要再次声明中间变量
	LabeledSales sales2(s, 2012 ,vals2 , 12) ;

	cout << "First try block:\n";
	try
	{
		int i ;
		cout << "Years = " << sales1.Year() << endl ;
		for (int i = 0 ; i < 12 ; ++i)
		{

			cout << sales1[i] << ' ' ;
			if( i % 6 == 5 )
			{
				cout << endl ;
			}

		}
		cout << "Year = " << sales2.Year() << endl ;
		cout << "Label = " << sales2.Label() << endl ;
		for(int i = 0 ; i < 12 ; ++i )
		{
			cout << sales2[i] << " " ;
			if( i % 6 == 5)
			{
				cout << endl ;
			}
		}
		cout << "End of try bolck 1.\n";
	}
	//catch的顺序和类的派生顺序相反
	catch(LabeledSales::nbad_index & bad)
	{
		cout << bad.what();
		cout << "Company: " << bad.label_val() << endl ;
		cout << "bad index: " << bad.bi_val() <<endl ;
	}
	catch(Sales::bad_index & bad )
	{
		cout << bad.what();
		cout << "bad index: " << bad.bi_val() <<endl;

	}
	cout <<  "\nNext try bolck: \n";

	try{
		sales2[2] = 37.5;
		sales1[20] = 23345 ;
		cout << "End of try block2.\n";
	}
	catch(LabeledSales::nbad_index & bad)
	{
		cout << bad.what();
		cout << "Company: " << bad.label_val() << endl ;
		cout << "bad index: " << bad.bi_val() <<endl ;
	}
	catch(Sales::bad_index & bad )
	{
		cout << bad.what();
		cout << "bad index: " << bad.bi_val() <<endl;

	}
	cout << "Done!\n";
	return 0;

}

//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter15/test
