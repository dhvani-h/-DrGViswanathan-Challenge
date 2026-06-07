/*
Problem: Bit++
Platform: Codeforces
Difficulty: Easy
Approach: Simulation
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;
    string s;

    while (n--) {
        cin >> s;

        if (s.find("++") != string::npos)
            x++;
        else
            x--;
    }

    cout << x;

    return 0;
}
