#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    ofstream out_file("test.txt", ios_base::trunc);
    if(!out_file.good()) {
        cerr << "Error while opening output file!" << endl;
        return -1;
    }

    out_file << "There were " << argc << " arguments to this program." << endl;
    out_file << "They are: " << endl;
    for (size_t i = 0; i < argc; ++i) {
        out_file << argv[i] << endl;
    }
    return 0;
}