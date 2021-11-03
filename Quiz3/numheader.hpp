#ifndef NUMHEADER_H
#define NUMHEADER_H
#include <cstdlib>
#include <vector>
#include <iostream>
using namespace std;
template<class T>
class Numbers
{
private:
	int ID;
	vector<int> num;

public:
	Numbers() 
	{
		ID = -1;
	}
	Numbers(int id, int num) 
	{ 
		num.reserve(id);
		for(int i=0;i<num; i++)
			num.push_back(rand() % 100); 
	}
	int getID() const 
	{
		return ID;
	}
	int getSize() const
	{
		return num.size();
	}
	int getElm(int i) const
	{
		return num.at(i);
	}
	int getMax() const
	{
		int max = 0;
		for (int i = 0; i < num.size(); i++){
			if (max < num.at(i))
				max = num.at(i);
		}
		return max;
	};
	int getMin() const
	{
		int min;
		for (int i = 0; i < num.size(); i++){
			if (min > num.at(i))
				min = num.at(i);
		}
		return min;
	}
	int getSum() const
	{
		int sum;
		for (int i = 0; i<num.size(); i++){
			sum += num.at(i);
		}
		return sum;
	}
	void deleteElm(int d)
	{
		int elm = d;
		for (int i = 0; i<num.size();i++)
		{
			if (elm == num.at(i))
				num.erase(i);
		}
	}
	void addElm(int a)
	{
		num.pop_back(a);
	}
	void printAll() const
	{
		for (int i = 0; i<num.size();i++)
		{
			cout << num.at(i) << "\t"; 
		}
	}
};

#endif