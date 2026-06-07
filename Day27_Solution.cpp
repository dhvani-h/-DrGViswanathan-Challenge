/*
Problem: Drinks
Platform: Codeforces
Difficulty: Easy-Medium
Approach: Average Calculation
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double sum = 0.0;
    
    for (int i = 0; i < n; i++) {
        double p;
        cin >> p;
        sum += p;
    }

    cout << fixed << setprecision(12) << sum / n;

    return 0;
}
