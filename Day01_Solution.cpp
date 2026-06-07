/*
Problem: Find Numbers with Even Number of Digits
Platform: LeetCode
Difficulty: Easy
Approach: Digit Counting
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int num : nums) {
            int digits = 0;

            while (num) {
                digits++;
                num /= 10;
            }

            if (digits % 2 == 0)
                count++;
        }

        return count;
    }
};
