#include <memory>
#include <iostream>

using namespace std;

class Foo
{
    public:
        Foo(int value): mData(value) {}
        int mData;
};

int main()
{
    auto foo = make_shared<Foo>(42);
    auto aliasing = shared_ptr<int>(foo, &foo->mData); // used to have a shared_ptr pointing to a member of an object while owning the object itself
    //The Foo object is only destroyed when both shared_ptrs (foo and aliasing) are destroyed

    cout << *aliasing;    
    return 0;
}