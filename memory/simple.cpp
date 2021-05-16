#include <iostream>

using namespace std;

class Simple
{
	public:
		Simple() { cout << "Simple constructor called!" << endl;}
		~Simple() { cout << "Simple destructor called!" << endl;}
};

int main(void)
{
	Simple* mySimpleArray = new Simple[4];
	delete[] mySimpleArray;
	return 0;
}
