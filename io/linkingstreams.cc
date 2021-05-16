//example of tie, linking streams together
// link can be established between any input and output streams to give them flush-on-access behavior. 
//In other words, when data is requested from an input stream, its linked output stream is automatically flushed. 

#include <fstream>

using namespace std;

int main()
{
    ifstream in_file("input.txt");  //Note: input.txt must exist.
    ofstream out_file("output.txt");
    //Set up a link between in_file and out_file
    in_file.tie(&out_file);
    //Output some text to out_file. Normally, this would
    //not flush because std::endl is not sent.
    out_file << "Hello there!";
    //out_file has NOT been flushed.
    
    //Read some text from in_file. this will trigger flush() on out_file
    string next_token;
    in_file >> next_token;
    
    //out_file HAS been flushed.


    return 0;


}