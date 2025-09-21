//Write a program that keeps asking the user for input until they enter
//a negative number (do-while loop).
#include<iostream>
using namespace std;

int main(){
    int num;
    do {
        cout << "Enter a number: ";
        cin >> num;
    } while (num >= 0);
    return 0;
}