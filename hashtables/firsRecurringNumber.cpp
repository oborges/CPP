//Google Question
//Given an array, find the first reccurring number
#include <iostream>
#include <memory>
#include <set>
#include <vector>

using namespace std;

int firstRecurringNumber(const vector<int>& inputArray)
{
    set<int> setInputArray;

    for (int num: inputArray) {
        auto result = setInputArray.insert(num);
        if (!result.second) return num; //result.second fails if duplicated value
    }

    throw "Undefined!";
    
} 


int main()
{
    vector<int> myArray = {2, 5, 1, 2, 3, 5, 1, 2, 4};
    cout << firstRecurringNumber(myArray) << endl;

    vector<int> myArray2 = {2, 1, 1, 2, 3, 5, 1, 2, 4};
    cout << firstRecurringNumber(myArray2) << endl;

}