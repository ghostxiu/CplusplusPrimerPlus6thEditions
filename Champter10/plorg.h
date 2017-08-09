#ifndef _PLORG_H_
#define _PLORG_H_

class plorg{
private:
	const static int Len = 19;
	char name[Len];
	int CI;
public:
	plorg(char * tag = "Plorga");
	bool reset(int & p);
	void show() const;
};
#endif // _PLORG_H_
