//Changed by Ghostxiu 2017/9/14
//原书程序清单13.4内容
#ifndef TABTENN1_H_
#define TABTENN1_H_
#include <string>
using std::string ;

class TableTennisPlayer{
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string &fn = "none" , const string &ln = "none" , bool ht = false );
	void Name() const ;
	void ResetTable(bool v) {hasTable = v ;}
	bool HasTable() { return hasTable ;}

};


class RatedPlayer : public TableTennisPlayer
{
private:
	unsigned int rating;
public:
	RatedPlayer(unsigned int  r = 0 , const string & fn = "none" , const string
			  & ln = "none" , bool ht = false);
	RatedPlayer(unsigned int r ,const TableTennisPlayer & tp);
	unsigned int Rating() { return rating ;}
	void ResetRating(unsigned int r) { rating = r ;}
};



#endif // TABTENN1_H_
//文件地址：https://github.com/ghostxiu/CplusplusPrimerPlus6thEditions/tree/master/Chapter13/test

