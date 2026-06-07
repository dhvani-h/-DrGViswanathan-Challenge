/*
Problem: Panoramix's Prediction
Platform: Codeforces
Difficulty: Medium
Approach: Find the next prime after n and check if it equals m
Time Complexity: O(√m)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    int nextPrime = n + 1;

    while (!isPrime(nextPrime)) {
        nextPrime++;
    }

    if (nextPrime == m)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
