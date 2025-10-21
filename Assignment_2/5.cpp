#include <iostream>
using namespace std;

// Base class
class Person {
    public:
        string Name = "Srinath";  
        int birthyear = 2006;      
        void showPersonInfo() {
            cout << "Birth Year: " << birthyear << endl;
        }
};

// Base class
class Athlete {
    public:
        string sport = "Basketball";     
        string teamName = "City idiot";   
        void showAthleteInfo() {
            cout << "Team: " << teamName << endl;
        }
};

// Derived class inheriting from both Person and Athlete
class SportsPerson : public Person, public Athlete {
    public:
        void showDetails() {
            cout << "Person Name: " << Person::Name << endl;     // Accessing Name from Person
            cout << "Sport: " << Athlete::sport << endl;         // Accessing sport from Athlete
        }
};

int main() {
    SportsPerson sp;
    sp.showDetails();       
    sp.showPersonInfo();    
    sp.showAthleteInfo();    
    return 0;
}