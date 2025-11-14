#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int count = 1;

    getline(cin, s);

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i-1]) count++;
        else count = 1;
        
        if (count > 6) break;
    }

    if (count > 6) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}