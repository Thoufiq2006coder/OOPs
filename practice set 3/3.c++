#include <iostream>
#include <string>
using namespace std;

class Book{
    private:
        string title; 
        float price;
    public:
        void setTitle(const string& Booktitle){
            title = Booktitle; 
        }
        string getTitle() const{
            return title; 
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