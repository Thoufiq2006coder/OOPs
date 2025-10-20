#include <iostream>
#include <algorithm>
using namespace std;

class Sorter {
    private:
        int arr[100];
        int size;

    public:
        void input() {
            cout << "Enter number of elements: ";
            cin >> size;
            cout << "Enter " << size << " elements:\n";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
        }

        void display() {
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        void bubbleSort(int n = -1) {
            if (n == -1) n = size;
            if (n <= 0) return;
            if (n > size) n = size;
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        swap(arr[j], arr[j + 1]);
                    }
                }
            }
            cout << "Sorted using Bubble Sort (first " << n << " elements):\n";
            for (int i = 0; i < n; ++i) cout << arr[i] << " ";
            cout << endl;
        }

        void insertionSort(int n = -1) {
            if (n == -1) n = size;
            if (n <= 0) return;
            if (n > size) n = size;
            for (int i = 1; i < n; i++) {
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = key;
            }
            cout << "Insertion Sort (first " << n << " elements):\n";
            for (int i = 0; i < n; ++i) cout << arr[i] << " ";
            cout << endl;
        }

        void selectionSort(int n = -1) {
            if (n == -1) n = size;
            if (n <= 0) return;
            if (n > size) n = size;
            for (int i = 0; i < n - 1; i++) {
                int minIndex = i;
                for (int j = i + 1; j < n; j++) {
                    if (arr[j] < arr[minIndex]) {
                        minIndex = j;
                    }
                }
                swap(arr[i], arr[minIndex]);
            }
            cout << "Selection Sort (first " << n << " elements):\n";
            for (int i = 0; i < n; ++i) cout << arr[i] << " ";
            cout << endl;
        }
};

int main() {
    Sorter s;
    s.input();
    s.bubbleSort();        
    s.insertionSort(4);    
    s.selectionSort(6);    

    return 0;
}