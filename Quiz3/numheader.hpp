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
		numbers.reserve(id);
		for(int i=0;i<num; i++)
			numbers.push_back(rand() % 100); 
	}
	int getID() const 
	{
		return ID;
	}
	int getSize() const
	{
		return numbers.size();
	}
	int getElm(int i) const
	{
		return numbers.at(i);
	}
	int getMax() const
	{
		int max;
		//maybe implement binary search to find max here
		return max 
	};
	int getMin() const
	{
		int min;
		//maybe implement binary search to find min here
		return min;
	}
	int getSum() const
	{
		int sum;
		for (int i = 0; i<numbers.size(); i++){
			sum += numbers.at(i);
		}
		return sum;
	}
	void deleteElm(int d)
	{

	}
	void addElm(int a)
	{
		numbers.pop_back(a);
	}
	void printAll() const;

};

#endif