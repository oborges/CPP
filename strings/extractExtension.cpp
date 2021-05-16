//string_view usage demo

#include <string>
#include <iostream>

using namespace std;

string_view extractExtension(string_view fileName)
{ 
    return fileName.substr(fileName.rfind('.'));
}

int main()
{
    string fileName = R"(./my file.ext)";
    cout << "C++ string: " << extractExtension(fileName) << endl;

    const char* cString = R"(./my file.ext)";
    cout << "C string: " << extractExtension(cString) << endl;

    cout << "Literal: " << extractExtension(R"(./my file.ext)") << endl;
    
    //sv string_view literal
    auto sv = "My string_view"sv;
    cout << "string_view literal: " << sv << endl;
    return 0;
}