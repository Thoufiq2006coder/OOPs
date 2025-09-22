#include<iostream>
using namespace std;

class University{
    private:
        string name;
        int rank;
    public:
        void setName(string naam){
            name = naam;
        }
        
        string getName() const{
            return name;
        }

        void setRank(int r){
            rank = r;
        }

        int getRank() const{
            return rank;
        }
};

int main(){
    University u;

    u.setName("Sai University");
    u.setRank(100);

    cout << "University Name: " << u.getName() << endl;
    cout << "University Rank: " << u.getRank() << endl;

    return 0;
}