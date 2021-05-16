// You should not use shared_ptr to create two shared_ptrs pointing to the same object. 
//Instead, you should make a copy as follows:

#include <iostream>

using namespace std;

class Simple
{
	public:
		Simple() { cout << "Simple constructor called!" << endl;}
		~Simple() { cout << "Simple destructor called!" << endl;}
};


void noDoubleDelete()
{
    auto smartPtr1 = make_shared<Simple>();
    shared_ptr<Simple> smartPtr2(smartPtr1);
}

int main(void)
{
    noDoubleDelete();
    return 0;
}