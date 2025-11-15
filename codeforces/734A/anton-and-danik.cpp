#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int A = count(s.begin(), s.end(), 'A');
    int D = n - A;

    if (A > D) cout << "Anton\n";
    else if (A < D) cout << "Danik\n";
    else cout << "Friendship\n";
}
