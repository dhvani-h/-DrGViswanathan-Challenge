/*
Problem: Way Too Long Words
Platform: Codeforces
Difficulty: Easy
Approach: String Manipulation
Time Complexity: O(n * m)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if (s.length() > 10) {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        } else {
            cout << s << endl;
        }
    }

    return 0;
}
