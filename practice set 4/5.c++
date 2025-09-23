#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Default constructor: Initialize all to zero
    Time() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    // Constructor to initialize hours and minutes, seconds defaulted to zero
    Time(int h, int m) {
        hours = h;
        minutes = m;
        seconds = 0;
    }

    // Constructor to initialize hours, minutes, and seconds
    Time(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Function to display time
    void display() {
        cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
    }
};

int main() {
    // Using default constructor
    Time t1;
    cout << "Default constructor: ";
    t1.display();

    // Using constructor with hours and minutes
    Time t2(10, 30);
    cout << "Constructor with hours and minutes: ";
    t2.display();

    // Using constructor with hours, minutes, and seconds
    Time t3(5, 45, 20);
    cout << "Constructor with hours, minutes, and seconds: ";
    t3.display();

    return 0;
}