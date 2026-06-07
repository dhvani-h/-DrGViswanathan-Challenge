/*
Problem: Boy or Girl
Platform: Codeforces
Difficulty: Easy
Approach: Set (Count Distinct Characters)
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> distinctChars;

    for (char ch : s) {
        distinctChars.insert(ch);
    }

    if (distinctChars.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
