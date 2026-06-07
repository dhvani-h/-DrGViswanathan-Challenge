/*
Problem: Nearly Lucky Number
Platform: Codeforces
Difficulty: Easy-Hard
Approach: Count the number of lucky digits (4 and 7) and check if the count itself is a lucky number.
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    int count = 0;

    for (char c : n) {
        if (c == '4' || c == '7')
            count++;
    }

    string luckyCount = to_string(count);
    bool isLucky = true;

    if (count == 0)
        isLucky = false;
    else {
        for (char c : luckyCount) {
            if (c != '4' && c != '7') {
                isLucky = false;
                break;
            }
        }
    }

    cout << (isLucky ? "YES" : "NO") << endl;

    return 0;
}
