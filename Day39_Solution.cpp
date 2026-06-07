/*
Problem: Arrival of the General
Platform: Codeforces
Difficulty: Medium
Approach: Find the leftmost maximum and rightmost minimum. Count swaps needed to move
          the maximum to the front and the minimum to the end. Adjust if positions overlap.
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxPos = 0;
    int minPos = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > a[maxPos]) {
            maxPos = i;
        }

        if (a[i] <= a[minPos]) {
            minPos = i;
        }
    }

    int moves = maxPos + (n - 1 - minPos);

    if (maxPos > minPos) {
        moves--;
    }

    cout << moves;

    return 0;
}
