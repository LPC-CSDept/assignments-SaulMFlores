#include <iostream>
using namespace std;

class Rectangle
{
	private:
        int width;
        int height;
        int area;// = width * height;
        
    public:
        void setWidth(int w) {width = w;}
        void setHeight(int h) {height = h;}
        int getArea() const{ return area;}
		void calculateArea( ) { area = width * height; }
        int getWidth() const{ return width;}
        
        
};

int main(){
  Rectangle *r, *r2;

  Rectangle rect;

  int area;


  r = new Rectangle;

  r2 = &rect; 

  r2->getWidth();


	cout << r->getWidth() ; // data hiding 

  r->setWidth(200);
  r->setHeight(10);
  r->calculateArea(); 
  area = r->getArea();
  cout << "Area of rectangle:" << area << endl;

	delete r;
	r = new Rectangle;

}

// int Rectangle :: getArea() const{
//   return width * height;
// }