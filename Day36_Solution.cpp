/*
Problem: Lucky Division
Platform: Codeforces
Difficulty: Medium
Approach: Check divisibility by all lucky numbers <= 1000
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477,
                   744, 747, 774, 777};

    bool almostLucky = false;

    for (int num : lucky) {
        if (n % num == 0) {
            almostLucky = true;
            break;
        }
    }

    cout << (almostLucky ? "YES" : "NO");

    return 0;
}
