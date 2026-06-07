/*
Problem: Helpful Maths
Platform: Codeforces
Difficulty: Easy
Approach: Sorting
Time Complexity: O(n log n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> nums;

    for (char ch : s) {
        if (ch != '+') {
            nums.push_back(ch);
        }
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1) {
            cout << "+";
        }
    }

    return 0;
}
