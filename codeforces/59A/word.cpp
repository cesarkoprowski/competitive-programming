#include <bits/stdc++.h>

using namespace std;

int main() {
    int countUpper = 0;
    int countLower = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 97) {
            countLower++;
        } else {
            countUpper++;
        }
    }
    if (countUpper == countLower || countUpper < countLower) {
        for (char& c : s) {
            c = tolower(static_cast<unsigned char>(c));
        }
    } else {
        for (char& c : s) {
            c = toupper(static_cast<unsigned char>(c));
        }
    }
    cout << s << endl;
    return 0;
}