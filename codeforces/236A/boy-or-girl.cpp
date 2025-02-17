#include <bits/stdc++.h>
#define MAX 100

using namespace std;

int main() {
    string s;
    set<char> c;
    getline(cin, s); 
    for (char i : s) {
        c.insert(i); 
    }
    int count = c.size();
    if (count % 2 == 0) { 
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
