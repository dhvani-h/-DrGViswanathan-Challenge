/*
Problem: Translation
Platform: Codeforces
Difficulty: Easy
Approach: String Reversal
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());

    if (s == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
