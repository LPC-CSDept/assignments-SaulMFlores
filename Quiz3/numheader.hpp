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
	int id;
	vector<T> num;

public:
	Numbers() 
	{
		id = -1;
	}
	Numbers(int idnum, T n) 
	{ 
		id = idnum;
		num.reserve(n);
		for(int i=0;i<n; i++)
			num.push_back(rand() % 3); 
	}
	T getID() const 
	{
		return id;
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
		int sum = 0;
		for (int i = 0; i<num.size(); i++){
			sum = sum + num[i];
		}
		return sum;
	}
	void deleteElm(T d)
	{
		//(iterato = num.begin(); iterator < num.end(); it++)
			//if(*it == d)
		if(d == num.front())
		{
			num.erase(num.begin());
		}
		for (int i = 0; i < num.size();i++)
		{
			if(d == num.at(i))
			{
				num.erase(num.begin()+i);
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