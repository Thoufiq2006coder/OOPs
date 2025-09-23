#include <iostream>
#include <string>
using namespace std;

class Book {
    private:
        string title;
        string author;
        double price;

    public:
        Book(string t) {
            title = t;
            author = "Unknown";
            price = 0.0;
        }

        Book(string t, string a) {
            title = t;
            author = a;
            price = 0.0;
        }

        Book(string t, string a, double p) {
            title = t;
            author = a;
            price = p;
        }

        void display() {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: $" << price << endl;
        }
};

int main() {
    Book b1("The Great Gatsby");
    cout << "Book with title only:" << endl;
    b1.display();

    Book b2("1984", "George Orwell");
    cout << "\nBook with title and author:" << endl;
    b2.display();

    Book b3("To Kill a Mockingbird", "Harper Lee", 18.99);
    cout << "\nBook with title, author, and price:" << endl;
    b3.display();

    return 0;
}