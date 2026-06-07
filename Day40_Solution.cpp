/* Problem: George and Accommodation
   Platform: Codeforces
   Difficulty: Easy-Hard
   Approach: Counting
   Time Complexity: O(n)
   Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i = 0; i < n; i++){
        int p, q;
        cin >> p >> q;
        if(q - p >= 2) count++;
    }
    cout << count << endl;
    return 0;
}
