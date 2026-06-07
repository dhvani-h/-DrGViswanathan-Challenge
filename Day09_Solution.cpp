/*
Problem: Team
Platform: Codeforces
Difficulty: Easy
Approach: Counting
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    while (n--) {
        int p, v, t;
        cin >> p >> v >> t;

        if (p + v + t >= 2)
            count++;
    }

    cout << count;

    return 0;
}
