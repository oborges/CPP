//Example of initializer-list constructor
#include <initializer_list>
#include <iostream>
#include <vector>

using namespace std;

class EvenSequence
{
    public:
        EvenSequence(initializer_list<double> args)
        {
            if (args.size() % 2 != 0) {
                throw invalid_argument("initializer_list should "
                    "contain even number of elements.");
            }
            
            mSequence.assign(args);

        }

        void dump() const
        {
            for (const auto& value : mSequence) {
                cout << value << ", ";
            }
            cout << endl;
        }
    private:
        vector<double> mSequence;
};

int main()
{
    try {
        EvenSequence p1 {1.0, 3.0, 4.0, 5.0, 7.0};
        p1.dump();
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
    return 0;
}