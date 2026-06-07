/*
Problem: Ultra-Fast Mathematician
Platform: Codeforces
Difficulty: Medium
Approach: Bitwise Comparison (XOR Logic)
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string result = "";

    for (int i = 0; i < a.length(); i++) {
        if (a[i] == b[i])
            result += '0';
        else
            result += '1';
    }

    cout << result << endl;

    return 0;
}
