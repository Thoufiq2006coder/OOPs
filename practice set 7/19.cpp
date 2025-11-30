#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int longestUniqueSubstring(string & text) {
    unordered_map<char, int> lastSeen;
    int start = 0;
    int maxLength = 0;

    for (int end = 0; end < text.length(); end++) {
        char current = text[end];

        if (lastSeen.find(current) != lastSeen.end() && lastSeen[current] >= start) {
            start = lastSeen[current] + 1;
        }

        lastSeen[current] = end;
        maxLength = max(maxLength, end - start + 1);
    }
    return maxLength;
}

int main() {
    string input = "pwwkew";
    int answer = longestUniqueSubstring(input);

    cout << "Length of longest substring without repeating characters: " << answer << endl;
    return 0;
}