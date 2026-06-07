/*
Problem: Petya and Countryside
Platform: Codeforces
Difficulty: Easy-Medium
Approach: Brute Force Expansion
Time Complexity: O(n²)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    int maxWatered = 0;

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i; j > 0; j--) {
            if (h[j - 1] <= h[j])
                count++;
            else
                break;
        }
        for (int j = i; j < n - 1; j++) {
            if (h[j + 1] <= h[j])
                count++;
            else
                break;
        }

        maxWatered = max(maxWatered, count);
    }

    cout << maxWatered;

    return 0;
}
