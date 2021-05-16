#include <memory>
#include <iostream>

using namespace std;

//implementation of single linked list using smart pointers
//In c++, in almost all cases, you should consider using a vector
//instead of a list. 

struct Node {
    public:
        int data;
        unique_ptr<Node> next;
        Node(int data): data {data}, next {nullptr} {}
        ~Node() {
            cout << "Destroying node with data: " << data << endl;
        }

};

struct List {
    List() : head {nullptr};
    void push(int data)  { };
    void pop() { };
    ~List() { };
    
private:
    unique_ptr<Node> head;
}

int main()
{
    
    auto element1 = make_unique<Node>(0);
    auto element2 = make_unique<Node>(1);
    element2->next = move(element1);
    auto element3 = make_unique<Node>(2);
    element3->next = move(element2);

    return 0;
}