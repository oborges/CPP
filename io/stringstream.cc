#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    cout << "Enter tokens. Control+D (Unix) or Control+Z (Windows) to end." << endl;
    ostringstream out_stream;

    while (cin) {
        string next_token;
        cout << "Next Token: ";
        cin >> next_token;
        if (!cin || next_token == "done") break;
        out_stream << next_token << "\t";
    }
    cout << "The end result is: " << out_stream.str();
    return 0;
}