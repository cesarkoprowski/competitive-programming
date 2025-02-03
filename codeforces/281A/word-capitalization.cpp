#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s[0];
    if (65 <= n && n <= 90) {
        cout << s << endl;
    } else {
        s[0] = n - 32;
        cout << s << endl;
    }
    return 0;
}