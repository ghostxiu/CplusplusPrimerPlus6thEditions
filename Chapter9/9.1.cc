//main.cc
#include<iostream>
#include"golf.h"
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	int n = 0 ;
	int hac ;
	char name[Len] ;
	golf * ann = new golf[Len];
	while(1)
	{
		cout << "Please enter the name of the golf:";
		cin.get();
		cin.get(name,Len);
		cout << "Please enter the level of the golf:";
		cin >> hac ;
		setgolf(ann[n], name,hac);
		if(!setgolf(ann[n]))break;
		n++;

	}
	for(int i = 0 ; i < n ; ++i)
	{
		cout << "The #" << i+1 <<" golf : \n";
		showgolf(ann[i]);
	}

	delete [] ann;
	return 0;
}

//golf.cc
#include<iostream>
#include"golf.h"
#include<cstring>
void setgolf(golf &g,const char *name ,int hc )
{
	using namespace std ;
	strcpy(g.fullname,name);
	g.handicap = hc ;
}


int setgolf(golf &g )
{
	if(strlen(g.fullname) == 0)
	{
		return 0 ;
	}
	return 1 ;
}

void showgolf(const golf &g)
{
	std::cout << "Now show the golf:" << std::endl ;
	std::cout << "name: " << g.fullname <<" , ";
	std::cout << "handicap: " << g.handicap << std:: endl;
}

//golf.h
// golf.h -- for pe9-1.cc
const int Len = 40 ;
struct golf
{
	char fullname[Len];
	int handicap;
};
//non-interactective versions:
// function sets golf structure to provided name , handicap
//using values passed as arguments to the function
void setgolf(golf &g,const char *name ,int hc );
//function solicits name and handicap from user
// and sets the members of g to the values entered
//returns 1 if name is entered , 0 if name is empty string
int setgolf(golf &g);
//function resets handicap to new value
void handicap(golf & g , int hc ) ;


//function displays contents of golf structure
void showgolf(const golf &g);
