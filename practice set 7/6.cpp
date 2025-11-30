#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

vector<vector<string>> clusterAnagrams(vector<string> &words) {
    unordered_map<string, vector<string>> groups;
    for (string current : words) {
        string sortedKey = current;
        sort(sortedKey.begin(), sortedKey.end());
        groups[sortedKey].push_back(current);
    }

    vector<vector<string>> output;
    for (auto &entry : groups) {
        output.push_back(entry.second);
    }
    return output;
}

int main() {
    vector<string> inputWords = {"listen", "silent", "enlist", "rat", "tar", "art", "evil", "vile", "veil", "live"};
    vector<vector<string>> grouped = clusterAnagrams(inputWords);

    cout << "Grouped Anagrams:" << endl;
    for (const auto &set : grouped) {
        for (const auto &item : set) {
            cout << item << " ";
        }
        cout << endl;
    }
    return 0;
}