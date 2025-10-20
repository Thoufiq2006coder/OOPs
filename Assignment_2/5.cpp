#include <iostream>
using namespace std;

class Person {
    public:
        string Name = "Srinath";
        int birthyear = 2006;

        void showPersonInfo() {
            cout << "Birth Year: " << birthyear << endl;
        }
};

class Athlete {
    public:
        string sport = "Basketball";
        string teamName = "City idiot";

        void showAthleteInfo() {
            cout << "Team: " << teamName << endl;
        }
};

class SportsPerson : public Person, public Athlete {
    public:
        void showDetails() {
            cout << "Person Name: " << Person::Name << endl;
            cout << "Sport: " << Athlete::sport << endl;
        }
};

int main() {
    SportsPerson sp;
    sp.showDetails();
    sp.showPersonInfo();
    sp.showAthleteInfo();
    return 0;
}