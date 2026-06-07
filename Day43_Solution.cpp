/* Problem: cAPS lOCK
   Platform: Codeforces
   Difficulty: Easy
   Approach: String Manipulation
   Time Complexity: O(n)
   Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    bool allUpper = true;
    for(int i = 0; i < n; i++)
        if(islower(s[i])) { allUpper = false; break; }

    bool firstLowerRestUpper = islower(s[0]);
    for(int i = 1; i < n; i++)
        if(islower(s[i])) { firstLowerRestUpper = false; break; }

    if(allUpper || firstLowerRestUpper){
        for(int i = 0; i < n; i++){
            if(isupper(s[i])) s[i] = tolower(s[i]);
            else s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}
