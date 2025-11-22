#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;
    int h = 0;
    int curr = 0;
    int count = 0;

    cin >> n;
    cin >> h;

    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (curr > h) {
            count += 2;
        } else {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
