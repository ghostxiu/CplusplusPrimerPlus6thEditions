#ifndef _ILIST_H_
#define _ILIST_H_
typedef int typex;

class ilist{
private:
	typex *member;
	int Len ;
	int Tag;
public:
	ilist(const int &Max);
	void add_mem(const typex & t);
	bool isEmpty();
	bool isFull();
	void visit(void (*pf)(typex &));//访问列表中的某个数据进行操作
	~ilist();
};

#endif // _ILIST_H_
