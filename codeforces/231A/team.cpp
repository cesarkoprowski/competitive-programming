#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int aux;
    int count;
    int result = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < 3; j++) {
            cin >> aux;
            if (aux) {
                count++;
            }
        }
        if (count > 1) {
            result++;
        }
    }
    cout << result << endl;
    return 0;
}