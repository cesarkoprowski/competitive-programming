#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int x = 0;
    string xs;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> xs;
        if (xs == "X++" || xs == "++X") {
            x++;
        } else if (xs == "X--" || xs == "--X") {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}