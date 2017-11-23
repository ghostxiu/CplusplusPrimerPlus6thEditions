//Changed by Ghostxiu 2017/11/23
//原书程序清单16.9 内容
//STL  方法
//using stl function
//use for_each() sort()  radom_shuffle()
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std ;


struct Review
{
	string title;
	int rating ;
};

bool operator<(const Review & r1 , const Review & r2 );
bool worseThan(const Review & r1 , const Review & r2 );
bool Fill(Review & re);
void Show(const Review & re);
void InflateReview(Review & re){re.rating++;}

int main()
{
	vector <Review> books ;
	Review temp_book;

	while(Fill(temp_book))
		books.push_back(temp_book);
	int num = books.size();


	if(num > 0 )
	{
		cout << "Thank you.You entered  following"<< num <<" ratings:\n";
		cout << "Rating Book:\n";
		//for_each(books.begin(),books.end(),Show);
		for	(auto x : books) Show(x);

		cout << "Sorted by title:\n";
		cout << "Rating Book:\n";
		sort(books.begin(),books.end());
		for_each(books.begin(),books.end(),Show);

		cout << "Sorted by rating:\n";
		cout << "Rating Book:\n";
		sort(books.begin(),books.end(),worseThan);
		for_each(books.begin(),books.end(),Show);

		cout << "After shuffling:\n";
		cout << "Rating Book:\n";
		random_shuffle(books.begin(),books.end());
		for_each(books.begin(),books.end(),Show);

		//基于范围的for循环
		cout << "Use area for:\n";
		cout << "Rating Book:\n";
		for	(auto &x : books) InflateReview(x);
		for	(auto x : books) Show(x);

	}
	else
	{
		cout << "no entries.\n";
	}
	cout << "Bye.\n";

	return 0;
}
//使用两个参数的sort需要重载<，升序排列
bool operator<(const Review & r1 , const Review & r2 )
{
	if(r1.title < r2.title)
	{
		return true;
	}
	else if (r1.title == r2.title && r1.rating < r2.rating)
	{
		return true;
	}
	else
		return false;
}

//使用三个参数的排序
bool worseThan(const Review & r1 , const Review & r2 )
{
	if(r1.rating < r2.rating)
	{
		return true ;
	}
	else
	{
		return false;
	}
}


bool Fill(Review & re)
{
	using std::cin ;
	cout << "Enter book title (q to quit) : ";
	getline(cin,re.title);
	if(re.title == "q")
	{
		return false;
	}
	cout << "Enter the book rating: ";
	cin >> re.rating ;
	if(!cin)
	{
		return false ;
	}

	while(cin.get() != '\n')
	{
		continue;
	}
	return true;
}

void Show(const Review & re)
{
	cout << re.rating << "\t" << re.title << endl ;
}

//文件地址:https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter16/test
