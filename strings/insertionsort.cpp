/* 
    Implements the "insertion sort" algorithm. The algorithm separates the array into two parts -- the sorted part and 
    unsorted part. Each element, starting at position 1, is examined. Everything earlier in the array is in the sorted part,
    so the algorithm shifts earch element over until the correct position is found to insert the current element. When the
    algorithm finishes with the last element, the entire array is sorted.
*/

#include <iostream>
using namespace std;

void sort(int inArray[], size_t inSize)
{
    //start at position 1 and examine each element.
    for (size_t i = 1; i < inSize; i++) {
        //Loop invariant:
        //  All elements in the range 0 to i-1 (inclusive) are sorted

        int element = inArray[i];
        
        // j marks the position in the sorted part after which element will be inserted.
        size_t j = i - 1;
        
        //As long as the current slot in the sorted array is higher than element, shift values to the right to make room for
        // inserting  (hence the name, "insertion sort") element in the right position.
        while (j >= 0 && inArray[j] > element) {
            inArray[j+1] = inArray[j];
            j--;
        }

        //At this point the current position in the sorted array is *not* greater than the element, so this is its new
        // position
        inArray[j+1] = element;
    }
}

int main()
{
    int minhaArray[] = {5, 9, 8, 6, 3, 10};
    cout << "minhaArray unsorted: " << endl;
    for (size_t i = 0; i < std::size(minhaArray); i++) 
        cout << minhaArray[i] <<  " ";

    //now, sorted:
    sort(minhaArray, size(minhaArray));
    cout << endl << "minhaArray sorted: " << endl;
    for (size_t i = 0; i < std::size(minhaArray); i++) 
        cout << minhaArray[i] <<  " ";

}