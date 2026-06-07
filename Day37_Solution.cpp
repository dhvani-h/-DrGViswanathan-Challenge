/*
Problem: HQ9+
Platform: Codeforces
Difficulty: Medium
Approach: Check if the string contains any of the output-producing instructions (H, Q, or 9)
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string p;
    cin >> p;

    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
