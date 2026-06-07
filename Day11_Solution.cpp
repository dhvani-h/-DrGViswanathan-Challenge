/*
Problem: String Task
Platform: Codeforces
Difficulty: Easy
Approach: String Manipulation
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";

    for (char ch : s) {
        ch = tolower(ch);

        if (ch != 'a' && ch != 'o' && ch != 'y' &&
            ch != 'e' && ch != 'u' && ch != 'i') {
            result += '.';
            result += ch;
        }
    }

    cout << result;

    return 0;
}
