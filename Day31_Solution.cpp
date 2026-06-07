/*
Problem: Magnets
Platform: Codeforces
Difficulty: Medium
Approach: Counting Groups
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string prev, curr;
    cin >> prev;

    int groups = 1;

    for (int i = 1; i < n; i++) {
        cin >> curr;

        if (curr != prev)
            groups++;

        prev = curr;
    }

    cout << groups << endl;

    return 0;
}
