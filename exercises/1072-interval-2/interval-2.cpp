#include <iostream>

using namespace std;

int main() {
    int n;
    int v[10000];
    int in = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if ((v[i] <= 20) && (v[i] >= 10)) {
            in++;
        }
    }
    cout << in << " in" << endl;
    cout << n - in << " out" << endl;
    return 0;
}