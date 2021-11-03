#ifndef NUMHEADER_H
#define NUMHEADER_H
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template<class T>
class Numbers
{
private:
	int ID;
	vector<T> num;

public:
	Numbers() 
	{
		ID = -1;
	}
	Numbers(T idnum, int n) 
	{ 
		num.reserve(idnum);
		for(int i=0;i<n; i++)
			num.push_back(rand() % 3); 
	}
	T getID() const 
	{
		return ID;
	}
	T getSize() const
	{
		return num.size();
	}
	T getElm(int i) const
	{
		return num.at(i);
	}
	T getMax() const
	{
		int max = 0;
		for (int i = 0; i < num.size(); i++){
			if (max < num.at(i))
				max = num.at(i);
		}
		return max;
	};
	T getMin() const
	{
		int min;
		for (int i = 0; i < num.size(); i++){
			if (min > num.at(i))
				min = num.at(i);
		}
		return min;
	}
	T getSum() const
	{
		int sum;
		for (int i = 0; i<num.size(); i++){
			sum += num.at(i);
		}
		return sum;
	}
	void deleteElm(T d)
	{
		auto i = std::find(begin(num), end(num), d);
		num.erase(i);
	}
	void addElm(T a)
	{
		num.push_back(a);
	}
	void printAll() const
	{
		for (int i = 0; i<num.size();i++)
		{
			cout << num[i] << "\t"; 
		}
		cout << endl;
	}
};

#endif