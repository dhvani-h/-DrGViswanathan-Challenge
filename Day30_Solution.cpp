/*
Problem: Bear and Big Brother
Platform: Codeforces
Difficulty: Easy
Approach: Simulation
Time Complexity: O(years)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int years = 0;

    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }

    cout << years << endl;

    return 0;
}
