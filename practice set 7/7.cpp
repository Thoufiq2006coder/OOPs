#include <stack>
#include <unordered_map>
#include <iostream>
using namespace std;

bool checkBalanced(string input) {
    stack<char> brackets;
    unordered_map<char, char> matching = {{')','('}, {']','['}, {'}','{'}};

    for (char symbol : input) {
        if (matching.find(symbol) == matching.end()) {
            brackets.push(symbol);
        } else {
            if (brackets.empty() || brackets.top() != matching[symbol]) {
                return false;
            }
            brackets.pop();
        }
    }
    return brackets.empty();
}

int main() {
    string testString = "(([]{}))";

    if (checkBalanced(testString)) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is not valid." << endl;
    }
    return 0;
}