/*
Problem: Anton and Danik
Platform: Codeforces
Difficulty: Medium
Approach: Counting
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

    int antonWins = 0;
    int danikWins = 0;

    for (char ch : s) {
        if (ch == 'A')
            antonWins++;
        else
            danikWins++;
    }

    if (antonWins > danikWins)
        cout << "Anton";
    else if (danikWins > antonWins)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}
