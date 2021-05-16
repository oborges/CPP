#include <memory>
#include <iostream>

using namespace std;

class Simple
{
	public:
		Simple() { cout << "Simple constructor called!" << endl;}
		~Simple() { cout << "Simple destructor called!" << endl;}
        void Go(void) { cout << "Do something..." << endl;}
};


void notLeaky()
{
    auto mySimpleSmartPtr = make_unique<Simple>();
    mySimpleSmartPtr->Go(); //even if Simple throws a exception, it will deallocate the object in its destructor
}

int main()
{
    notLeaky();
    return 0;
}