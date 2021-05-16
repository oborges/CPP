#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool changeNumberForID(string_view filename, int id, string_view new_number)
{
    fstream io_data(filename.data());
    if (!io_data) {
        cerr << "Error while opening file " << filename << endl;
        return false;
    }

    //Loop until we find the end of file
    while (io_data) {
        int id_read;
        string number;

        //Read the next ID.
        io_data >> id_read;
        if (!io_data)
            break;

        //Check to see if the current record is the one being changed.
        if (id_read == id) {
            //Seek the write position to the current read position
            io_data.seekp(io_data.tellg());
            //Output a space, then the new number.
            io_data << " " << new_number;
            break;
        }

        //Read the current number to advance the stream.
        io_data >> number;
    }

    return true;
}

int main()
{
    //first, some pre-work: lets create our file
    ofstream my_file("records.txt");
    if (!my_file) {
        cout << "Error creating records.txt";
        return 1;
    }
    my_file << "123 408-555-0394" << endl;
    my_file << "124 415-555-3422" << endl;
    my_file << "263 585-555-3490" << endl;
    my_file << "100 650-555-3434" << endl;
    
    my_file.close();
    if (my_file.fail()) {
        cout << "Error closing file records.txt";
        return 1;
    }

    //Now, lets use our bidirectional stream
    //to change the record defined in id
    changeNumberForID("records.txt", 263, "111-111-1111");


}