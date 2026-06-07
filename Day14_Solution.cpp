/*
Problem: Word Capitalization
Platform: Codeforces
Difficulty: Easy
Approach: String Manipulation
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    s[0] = toupper(s[0]);

    cout << s;

    return 0;
}
