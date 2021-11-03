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
	Numbers() 
	{
		ID = -1;
	}
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
		int max = 0;
		for (int i = 0; i < numbers.size(); i++){
			if (max < numbers.at(i))
				max = numbers.at(i);
		}
		return max 
	};
	int getMin() const
	{
		int min;
		for (int i = 0; i < numbers.size(); i++){
			if (min > numbers.at(i))
				min = numbers.at(i);
		}
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
		//delete all the elements that is the 
		//same as the value d from the vector. 
	}
	void addElm(int a)
	{
		// Add the value as a last element to the vector. This value could 
		//be duplicated to others.
		numbers.pop_back(a);
	}
	void printAll() const
	{
		//print all elements in a vector
	}

};

#endif