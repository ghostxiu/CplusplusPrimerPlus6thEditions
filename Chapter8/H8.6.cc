//具体化函数
#include<iostream>
#include<cstring>
using namespace std ;

template<class T>
T maxn(T a[], int n );

template <> char * maxn<char *>( char * a[], int n);
//具体化
template<class T>
void fill_maxn(T *a ,int n) ;

int main()
{

	cout << "Try int ,please enter 6 int num:";
	int *int_a = new int[6] ;
	fill_maxn(int_a,6);
	int max1 = maxn(int_a,6);
	cout << "\nshow max:" <<max1 << endl ;

	cout << "Try double ,please enter 4 double num:";
	double *dou_a = new double[4] ;
	fill_maxn(dou_a,4);
	double max2 = maxn(dou_a , 4);
	cout << "\nshow max:" << max2 << endl ;



	cout << "Try string ,please enter 5 string:";
	//此处较为麻烦，用到了二维动态数组
	//如果去掉fill_maxn的一步，则显得简单
	int r = 5,c = 20 ;
	char ** s = new char*[r];
    int size = r*c;
    s[0]= new char[size];
    for(int i = 1 ; i < r ; i++)
    {
        s[i] = &s[0][i*c];
    }
	fill_maxn(s,5);
	char *max3 = maxn(s , 5);
	cout << "\nshow max:" << max3 << endl ;

	delete [] int_a ;
	delete [] dou_a ;

	for(int i = 0 ; i < r ; i++)
    {
        delete [] s[i];
    }
    delete [] s;

	cin.get();
	cin.get();

	return 0 ;
}

template<class T>
T maxn(T a[], int n )
{
	int i = 0 ;
	T m = a[i];
	for( i = 1 ; i < n ; ++i)
	{
		if( m < a[i] )
		{
			m = a[i];
		}
	}
	return m ;
}

template <> char * maxn( char *a[] , int n)
{
	char * pm = a[0];
	int l = strlen(a[0]);

	for(int i = 1 ; i < n ; ++i)
	{
		if( strlen(a[i]) > l)
		{
			pm = a[i] ;
		}
	}
	return pm ;
}


template<class T>
void fill_maxn(T *a ,int n)
{
	for(int i = 0 ; i < n ; ++i)
	{
		cout << "Enter #" <<i+1 << ":";
		cin >> a[i];
	}
}
