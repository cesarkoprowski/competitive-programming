#include <bits/stdc++.h>

using namespace std;

int main() {
    string w[100];
    string w2[100];
    int n;
    cin >> n;
    getchar();
    for(int i = 0; i < n; i++) {
        getline(cin, w[i]);
        if(w[i].length() > 10) {
            w2[i] = w[i][0] + to_string(w[i].length() - 2) + w[i][w[i].length() - 1];
            cout << w2[i] << endl;
        } else {
            cout << w[i] << endl;
        }
    }
    return 0;
}
