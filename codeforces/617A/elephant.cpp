#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    int i = 0;
    int a = 5;
    int count = 0;
    cin >> x;
    while (count < x) {
        if ((count+a) > x) {
            a--;
        } else {
            i++;
            count += a;
        }
    }
    cout << i << endl;
    return 0;
}