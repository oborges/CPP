#include <iostream>
#include <exception>
#include <stdexcept>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


vector<int> ReadIntegerFile(string_view file_name)
{
    ifstream input_stream(file_name.data());
    if (input_stream.fail()) throw invalid_argument("Unable to open the file."); //We failed to open the file: throw a exception   

    //Read the integers one-by-one and add them to the vector
    vector<int> integers;
    int temp;
    while(input_stream >> temp) {
        integers.push_back(temp);
    }

    if (!input_stream.eof()) {
        //We did not reach the end-of-file
        //This means that some error occurred while reading the file
        //Throw an exception.
        throw runtime_error("Error reading the file.");
    }

}

void MyTerminate()
{
    cout << "Uncaught exception!" << endl;
    exit(1);
}

int main()
{
    set_terminate(MyTerminate);

    const string file_name = "IntegerFile.txt";
    vector<int> my_ints = ReadIntegerFile(file_name);

    for (const auto& element: my_ints) {
        cout << element << " ";
    }
    cout << endl;
    return 0;      
}