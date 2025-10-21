#include <iostream>
using namespace std;

class List{
    private:
        int* arr;      
        int size;      // current number of elements stored
        int capacity;  // maximum capacity of the list
    public:
        // Constructor
        List(int capacity){
            this->size = 0; // We initialize 'size' to 0 because a newly created list is empty.
            this->capacity = capacity;
            arr = new int[this->capacity];
        }
        ~List(){
            delete[] arr;
        }

        void add(int value){
            if(size < capacity){         // Add a value at the end of the list if there is capacity.
                arr[size++] = value;
            } else {
                cout << "List is full!" << endl;
            }
        }

        void remove(int value){
            if (size == 0) {
                cout << "List is empty!" << endl;
                return;
            }
            int idx = -1; // Find index of the value to remove
            for (int i = 0; i < size; ++i) { 
                if (arr[i] == value) { // Find the first occurrence
                    idx = i;
                    break;
                }
            }
            if (idx == -1) {
                cout << "Value not found!" << endl;
                return;
            }
            for (int j = idx; j < size - 1; ++j) // Shift elements left
                arr[j] = arr[j + 1];
            --size; // Decrement size
        }

        // Print all elements currently in the list separated by spaces.
        void display(){
            for(int i = 0; i < size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        // Return current number of elements in the list.
        int getSize(){
            return size;
        }
};

int main(){
    List myList(5); // Creates a list with capacity 5
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
}

