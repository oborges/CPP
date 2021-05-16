//Note that C++ has proper object-oriented classes to work with files
//This example using the old C functions fopen() and fclose() is just 
// to give a demonstration of what shared_ptrs can be used for besides pure memory
#include <iostream>


using namespace std;

void CloseFile(FILE* filePtr)
{
    if (filePtr == nullptr)
        return;
    
    fclose(filePtr);
    cout << "File closed." << endl;
}

int main()
{
    FILE* f = fopen("data.txt", "w");
    char str[] = "Just testing\n";
    shared_ptr<FILE> filePtr(f, CloseFile);
    if (filePtr == nullptr) {
        cerr << "Error opening file." << endl;
    } else {
        cout << "File opened." << endl;
        fwrite(str, 1, sizeof(str), f);
    }

    return 0;
}