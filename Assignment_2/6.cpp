#include <iostream>
using namespace std;

class Sports; 

class Student {
    private:
        int marks;

    public:
        Student(int m) {
            marks = m;
        }
        friend void showPerformance(Student s, Sports sp);
};

class Sports {
    private:
        int score;

    public:
        Sports(int sc) {
            score = sc;
        }
        friend void showPerformance(Student s, Sports sp);
};

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