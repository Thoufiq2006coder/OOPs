#include <iostream>
using namespace std;

class Sports; // Forward declaration

class Student {
    private:
        int marks;  

    public:
        // Constructor to initialize marks
        Student(int m) {
            marks = m;
        }

        // Declare friend function to access private data
        friend void showPerformance(Student s, Sports sp);
};

class Sports {
    private:
        int score;  

    public:
        // Constructor to initialize score
        Sports(int sc) {
            score = sc;
        }

        // Declare friend function to access private data
        friend void showPerformance(Student s, Sports sp);
};

// Friend function accessed private members of both Student and Sports
void showPerformance(Student s, Sports sp) {
    cout << "Academic mark: " << s.marks << endl;
    cout << "Sports score: " << sp.score << endl;
    cout << "Total performance: " << s.marks + sp.score << endl;
}

int main() {
    Student stu(85);
    Sports ath(40);
    showPerformance(stu, ath);

    return 0;
}