#ifndef NUMHEADER_H
#define NUMHEADER_H
#include <cstdlib>
#include <vector>
#include <iostream>
template<class T>
class Numbers
{
private:
	int ID;
	vector<int> numbers;

public:
	Numbers() {ID = -1;}
	Numbers(T id, int num) 
	{ 
		pool.reserve(id);
		for(int i=0;i<num; i++)
			pool.push_back(rand() % 100); 
	}
	int getID() const;
	int getSize const;
	int getElm(int i) const;
	int getMax() const;
	int getMin() const;
	int getSum() const;
	void deleteElm(int d);
	void addElm(int a);
	void printAll() const;

};

#endif