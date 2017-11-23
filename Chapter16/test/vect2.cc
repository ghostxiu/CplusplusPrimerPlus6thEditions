//Changed by Ghostxiu 2017/11/23
//原书程序清单16.8 内容
//STL 迭代器和容器方法 iterator
//size() begin() end() push_back() erase() insert()
#include <iostream>
#include <vector>
#include <string>
using std::string ;
using std::vector ;


struct Review
{
	string title;
	int rating ;
};

bool Fill(Review & re);
void Show(const Review & re);

using std::cout ;
using std::endl;

int main()
{
	vector <Review> books ;
	Review temp_book;
	while(Fill(temp_book))
		books.push_back(temp_book);
	int num = books.size();
	if(num > 0 )
	{
		cout << "Thank you.You entered the followings:\n";
		cout << "Rating Book:\n";

		for(int i = 0 ; i < num ; ++i)
		{
			Show(books[i]);
		}
		cout << "Reprising:\n";
		cout << "Rating Book:\n";

		vector <Review>::iterator pr;
		//or use  auto pr = books.begin();
		for(pr = books.begin(); pr != books.end();++pr)
		{
			Show(*pr);
		}

		vector <Review> oldlist(books);
		if(num > 3)
		{
			cout << "After erasure:\n";
			books.erase(books.begin()+1,books.begin()+3);
			for(pr = books.begin(); pr != books.end();++pr)
			{
				Show(*pr);
			}

			cout << "After insection:\n";
			books.insert(books.begin()+1 , oldlist.begin()+1 , oldlist.begin()+2);
			for(pr = books.begin(); pr != books.end();++pr)
			{
				Show(*pr);
			}
		}

		cout << "Swapping oldlist with books:\n";
		books.swap(oldlist);
		for(pr = books.begin(); pr != books.end();++pr)
		{
			Show(*pr);
		}
	}
	return 0;
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
