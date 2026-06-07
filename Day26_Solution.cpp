/*
Problem: Football
Platform: Codeforces
Difficulty: Easy-Medium
Approach: String Traversal
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
            if (count >= 7) {
                cout << "YES";
                return 0;
            }
        } else {
            count = 1;
        }
    }

    cout << "NO";

    return 0;
}
