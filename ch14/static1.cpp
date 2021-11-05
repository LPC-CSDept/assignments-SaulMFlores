#include <iostream>
using namespace std;

class Rect
{
private:
    int width;
    int height;
    static int count;

public:
    Rect() : width(0), height(0) 
	{
		cout << "count " << count << endl;
		count = count + 1; 
	};
    Rect(int w, int h) : width(w), height(h) { count += 1; };
    static int getCount(void);
    static void addCount(void);
};

int Rect::count = 0;
int Rect::getCount(void)
{
    return count;
}
void Rect::addCount(void)
{
    count += 1;
}

int main()
{
	cout << "The number of rectangle " << Rect::getCount() << endl; 
	Rect::addCount();
	cout << "addding 1 rectangle" << Rect::getCount() << endl; 
}