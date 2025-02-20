#include <bits/stdc++.h>

using namespace std;

int main() {
    int count = 0;
    string s;
    int n;
    cin >> n;
    getchar();
    getline(cin, s);
    for (int i = (n-1); i > 0; i--) {
        if (s[i] == s[i-1]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
