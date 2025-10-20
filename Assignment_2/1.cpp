// Create a class that behaves like a simple list in Python. It should support adding,

// removing, displaying, and getting the size of the list. Explain why you used con-
// structors and any operator overloading (if used).
#include <iostream>
using namespace std;

class List{
    private:
        int* arr;
        int size;
        int capacity;
    public:
        // Rename parameter to 'capacity' to avoid confusion with member 'size'.
        List(int capacity){
            // A newly created list contains 0 elements.
            this->size = 0;
            this->capacity = capacity;
            arr = new int[this->capacity];
        }
        ~List(){
            delete[] arr;
        }
        void add(int value){
            if(size < capacity){
                arr[size++] = value;
            } else {
                cout << "List is full!" << endl;
            }
        }
        // Remove the first occurrence of 'value'. Shift elements left to fill the gap.
        void remove(int value){
            if (size == 0) {
                cout << "List is empty!" << endl;
                return;
            }
            int idx = -1;
            for (int i = 0; i < size; ++i) {
                if (arr[i] == value) { 
                    idx = i; 
                    break; 
                }
            }
            if (idx == -1) {
                cout << "Value not found!" << endl;
                return;
            }
            for (int j = idx; j < size - 1; ++j)
                arr[j] = arr[j + 1];
            --size;
        }
        void display(){
            for(int i = 0; i < size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        int getSize(){
            return size;
        }
};
int main(){
    List myList(5);
    myList.add(10);
    myList.add(20);
    myList.add(30);
    myList.add(40);
    myList.add(50);
    myList.display(); 
    cout << "Size: " << myList.getSize() << endl; 
    myList.remove(20); 
    myList.display(); 
    cout << "Size: " << myList.getSize() << endl; 
    return 0;
} // removing, displaying, and getting the size of the list. Explain why you used constructors and any operator overloading (if used).