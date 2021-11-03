#ifndef NUMHEADER_H
#define NUMHEADER_H
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template<class T> class Numbers
{
private:
	T ID;
	vector<T> num;

public:
	Numbers() 
	{
		ID = -1;
	}
	Numbers(T idnum, T n) 
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
	T getElm(T i) const
	{
		return num.at(i);
	}
	T getMax() const
	{
		T max = 0;
		for (int i = 0; i < num.size(); i++){
			if (max < num.at(i))
				max = num.at(i);
		}
		return max;
	};
	T getMin() const
	{
		T min;
		for (int i = 0; i < num.size(); i++){
			if (min > num.at(i))
				min = num.at(i);
		}
		return min;
	}
	T getSum() const
	{
		T sum;
		for (int i = 0; i<num.size(); i++){
			sum += num.at(i);
		}
		return sum;
	}
	void deleteElm(T d)
	{
		if(d == num.front())
		{
			num.erase(num.begin());
		}
		{
			for (int i = 0; i < num.size();i++)
			{
				if(d == num.at(i))
				{
					num.erase(num.begin()+i);
				}
			}
		}
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