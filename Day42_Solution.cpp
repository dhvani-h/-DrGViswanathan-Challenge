/* Problem: Calculating Function
   Platform: Codeforces
   Difficulty: Easy-Hard
   Approach: Math (Pattern Observation)
   Time Complexity: O(1)
   Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    if(n % 2 == 0)
        cout << n / 2 << endl;
    else
        cout << -(n + 1) / 2 << endl;
    return 0;
}
