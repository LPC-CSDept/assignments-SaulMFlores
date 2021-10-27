//ok but can get stale (as in new data inputed does not update the information inputed)
#include <iostream>
using namespace std;

class Calcsum 
{
private:
	int opr1;
	int opr2;
    int sum;

public:
	int getSum() const { return opr1+opr2; }
	void setOpr1(int v) { opr1 =  v; }
	void setOpr2(int v) { opr2 =  v; }
    

} ; 

int main()
{
	Calcsum c1;
	int 	result;

	c1.setOpr1(10);
	c1.setOpr2(90);
	result = c1.getSum();
	cout << "The result " << result << endl;

}
