#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Time(int h, int m) {
        hours = h;
        minutes = m;
        seconds = 0;
    }

    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void display() {
        cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }
};

int main() {
    Time t1;
    cout << "Default constructor: ";
    t1.display();

    Time t2(10, 30);
    cout << "Constructor with hours and minutes: ";
    t2.display();

    Time t3(5, 45, 20);
    cout << "Constructor with hours, minutes, and seconds: ";
    t3.display();

    return 0;
}