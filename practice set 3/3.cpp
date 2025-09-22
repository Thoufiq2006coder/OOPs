#include <iostream>
#include <string> // Include string library
using namespace std;

class Book{
    private:
        string title; // Change char to string
        float price;
    public:
        void setTitle(const string& Booktitle){
            title = Booktitle; // Assign string directly
        }
        string getTitle() const{
            return title; // Return string directly
        }

        void setPrice(float Bookprice){
            price = Bookprice;
        }
        float getPrice() const{
            return price;
        }
};

int main(){
    Book book;
    book.setTitle("Atomic Habits");
    book.setPrice(10.99);

    cout << "Title: " << book.getTitle() << endl;
    cout << "Price: $" << book.getPrice() << endl;

    return 0;
}