#include <bits/stdc++.h>
#define MAX 100

using namespace std;

int main() {
    string s1, s2;
    int aux = 0;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), [](unsigned char c) { return tolower(c); });
    transform(s2.begin(), s2.end(), s2.begin(), [](unsigned char c) { return tolower(c); });
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            if (s1[i] > s2[i]) {
                aux = 1;
            } else if (s1[i] < s2[i]) {
                aux = -1;
            }
            break;
        }
    }
    cout << aux << endl;
    return 0;
}