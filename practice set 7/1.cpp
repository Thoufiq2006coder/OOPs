#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findPair(vector<int> &arr, int sum)
{
    unordered_map<int, int> seen;
    for(int idx = 0; idx < arr.size(); idx++)
    {
        int needed = sum - arr[idx];
        if(seen.find(needed) != seen.end())
        {
            return {seen[needed], idx};
        }
        seen[arr[idx]] = idx;
    }
    return {}; 
}

int main()
{
    vector<int> values = {2, 7, 11, 15};
    int targetSum = 13;
    vector<int> answer = findPair(values, targetSum);

    if(!answer.empty())
        cout << "Indices: " << answer[0] << ", " << answer[1] << endl;
    else
        cout << "No valid pair found." << endl;

    return 0;
}