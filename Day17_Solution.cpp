/*
Problem: Stones on the Table
Platform: Codeforces
Difficulty: Easy
Approach: Greedy / String Traversal
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        }
    }

    cout << count;

    return 0;
}
