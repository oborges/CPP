//example of range based for
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> exemplo = {5, 10, 25, 20, 25, 30};

    for (int i: exemplo) {
        cout << i << endl;
    }

    return 0;
}