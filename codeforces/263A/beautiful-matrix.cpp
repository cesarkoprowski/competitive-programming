#include <bits/stdc++.h>

using namespace std;

int main() {
    int m[5][5];
    int ai, aj;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> m[i][j];
            if (m[i][j] == 1) {
                ai = i - 2;
                aj = j - 2;
                if (ai < 0) {
                    ai *= -1;
                }
                if (aj < 0) {
                    aj *= -1;
                }
            }
        }
    }
    cout << (ai + aj) << endl;
    return 0;
}