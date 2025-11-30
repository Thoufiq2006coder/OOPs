#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countSubarrays(vector<int>& arr, int targetSum) {
    unordered_map<int, int> prefixCount;
    prefixCount[0] = 1;

    int total = 0;
    int currentSum = 0;

    for (int value : arr) {
        currentSum += value;

        if (prefixCount.find(currentSum - targetSum) != prefixCount.end()) {
            total += prefixCount[currentSum - targetSum];
        }

        prefixCount[currentSum]++;
    }

    return total;
}

int main() {
    vector<int> numbers = {1, 2, 3};
    int desiredSum = 2;

    int result = countSubarrays(numbers, desiredSum);

    cout << "Number of subarrays: " << result << endl;
    return 0;
}