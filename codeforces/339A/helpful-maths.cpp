#include <bits/stdc++.h>
#define MAX 100

using namespace std;

int main() {
    int aux;
    int t = 0;
    vector<int> vec(MAX);

    while (cin >> vec[t]) {
        if (cin.peek() == '\n') {break;}
        t++;
    }
    
    if (t > 0) {
        vec.resize(t+1);
        sort(vec.begin(), vec.end());

        for (int i = 0; i < t; i++) {
            cout << vec[i];
            cout << "+";
        }

    }

    cout << vec[t] << endl;

    return 0;
}