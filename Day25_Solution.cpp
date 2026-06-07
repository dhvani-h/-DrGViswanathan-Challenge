/*
Problem: Word
Platform: Codeforces
Difficulty: Easy-Medium
Approach: String Manipulation
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upperCount = 0;
    int lowerCount = 0;

    for (char ch : s) {
        if (isupper(ch))
            upperCount++;
        else
            lowerCount++;
    }

    if (upperCount > lowerCount) {
        for (char &ch : s)
            ch = toupper(ch);
    } else {
        for (char &ch : s)
            ch = tolower(ch);
    }

    cout << s;

    return 0;
}
