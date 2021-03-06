#include <iostream>
#include <ios>
#include <iomanip>


using namespace std;

int main(void)
{
    //Boolean values
    bool myBool = true;
    cout << "This is the default: " << myBool << endl;
    cout << "This should be true: " << boolalpha << myBool << endl;
    cout << "This should be 1: " << noboolalpha << myBool << endl;

    //Simulate printf "%6d" with streams
    int i = 123;
    cout << "This should be '   123':  " << setw(6) << i << endl;

    //Simulate printf "%06d" with streams
    cout << "This should be '000123': " << setfill('0') << setw(6) << i << endl;

    //Fill with *
    cout << "This should be '***123': " << setfill('*') << setw(6) << i << endl;

    //Reset fill character
    cout << setfill(' ');

    //Floating point values
    double dbl = 1.452;
    double dbl2 = 5;
    cout << "This should be ' 5': " << setw(2) << noshowpoint << dbl2 << endl;
    cout << "This should be @@1.452: " << setw(7) << setfill('@') << dbl << endl;
    
    //Reset fill character
    cout << setfill(' ');

    //Instruct cout to start formatting numbers according to your location.
    cout.imbue(locale(""));

    //Format numbers according to your location
    cout << "This is 1234567 formatted according to your location: " << 1234567 << endl;

    //Monetary value. What exactly a monetary value means depends on your location
    //For example, in the USA, a monetary value of 120000 means 120000 dollar cents, 
    //which is 1200.00 dollars
    cout << "This should be a monetary value of 120000, formatted according to your location: "
         << put_money("120000") << endl;
    
    //Data and time
    time_t t_t = time(nullptr); //Get current system time
    tm* t = localtime(&t_t);    //Convert to local time
    cout << "This should be the current date and time formatted according to your location: "
         << put_time(t, "%c") << endl;
    
    //Quoted string
    cout << "This should be \"Quoted string with \\\"embedded quotes\\\".\": "
         << quoted("Quoted string with \"embedded quotes\".") << endl;


    return 0;
}