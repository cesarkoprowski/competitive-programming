#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int k;
    int count = 0;
    vector<int> a(50);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] >= a[k-1] && a[i] > 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}