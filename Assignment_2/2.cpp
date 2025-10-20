#include <iostream>
using namespace std;

class Dictionary {
    private:
        string keys[100];
        string values[100];
        int size;
    public:
        Dictionary() {
            size = 0;
        }
        void add(const string& key, const string& value) {
            for (int i = 0; i < size; ++i) {
                if (keys[i] == key) {
                    values[i] = value; 
                    return;
                }
            }
            if (size < 100) {
                keys[size] = key;
                values[size] = value;
                size++;
            } else {
                cout << "Dictionary is full!" << endl;
            }
        }
        string search(const string& key) {
            for (int i = 0; i < size; ++i) {
                if (keys[i] == key) {
                    return values[i];
                }
            }
            return "Key not found!";
        }
        void display() {
            for (int i = 0; i < size; ++i) {
                cout << keys[i] << ": " << values[i] << endl;
            }
        }
};

int main() {
    Dictionary dict;
    dict.add("name", "Thoufiq");
    dict.add("age", "19");
    dict.add("city", "Chennai");

    cout << "Search age: " << dict.search("age") << endl;
    cout << "Search country: " << dict.search("country") << endl;

    cout << "All key-value pairs in the dictionary:" << endl;
    dict.display();

    return 0;
}