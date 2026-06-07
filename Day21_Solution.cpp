/*
Problem: Twins
Platform: Codeforces
Difficulty: Easy-Medium
Approach: Greedy + Sorting
Time Complexity: O(n log n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> coins(n);
    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        totalSum += coins[i];
    }

    sort(coins.begin(), coins.end(), greater<int>());

    int mySum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        mySum += coins[i];
        count++;

        if (mySum > totalSum - mySum) {
            break;
        }
    }

    cout << count;

    return 0;
}
