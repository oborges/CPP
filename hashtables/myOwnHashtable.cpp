//Building my own hash table implementation just for fun

#include <memory>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Hashtable 
{
    private:
        vector<int> mDado;
        vector<string_view> mKeys;

    public:
        Hashtable(int size)
        {
            mDado.resize(size);    
        }
        
        //simple dirty hash function, just as example
        int _hash(string_view key) {
           int hash = 0;
           for (size_t i =0; i < key.length(); i++) {
              hash = (hash + key[i] * i) % mDado.size();       
           }
           return hash;
        }

        int get(string_view key) {
            int index = _hash(key);
            return mDado[index];
        }

        void set(string_view key, int value) {
            int index = _hash(key);
            mDado[index] = value;
            mKeys.push_back(key);
        }

        vector<string_view> keys() const {
            return mKeys;
        }

};

int main()
{
    Hashtable myHash(50);
    myHash.set("Olavo", 100);
    myHash.set("Borges", 200);
    cout << "Value of Olavo: " << myHash.get("Olavo") << endl;
    cout << "Value of Borges: " << myHash.get("Borges") << endl;
    vector<string_view> actualKeys = myHash.keys();
    cout << "Existing keys: " << endl;
    for (string_view key : actualKeys) cout << "Key: " << key << endl;
    
}