#include <bits/stdc++.h>

using namespace std;

int main() {
    string number;
    int count = 0;
    char c;

    getline(cin, number);

    for (int i = 0; i < number.length(); i++) {
        c = number[i];

        if (c == '4' || c == '7') {
            count++;
        }
    }

    if (count == 4 || count == 7) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}