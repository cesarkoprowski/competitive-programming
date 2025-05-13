#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, w, count = 0;
    int i;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++) {
        count += k*i;
    }
    if (count < n) {
        cout << 0 << endl;
        return 0;
    }
    cout << count - n << endl;
    return 0;
}