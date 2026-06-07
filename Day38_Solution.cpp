/*
Problem: I_love_%username%
Platform: Codeforces
Difficulty: Easy-Hard
Approach: Track the maximum and minimum scores seen so far and count record breaks
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int score;
    cin >> score;

    int maxScore = score;
    int minScore = score;
    int amazing = 0;

    for (int i = 1; i < n; i++) {
        cin >> score;

        if (score > maxScore) {
            amazing++;
            maxScore = score;
        }
        else if (score < minScore) {
            amazing++;
            minScore = score;
        }
    }

    cout << amazing;

    return 0;
}
