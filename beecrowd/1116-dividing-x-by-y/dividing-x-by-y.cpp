#include <iostream>

using namespace std;

int main() {
    int n;
    int x, y;
    float z;
    cin >> n;
    cout.precision(1);
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        if (!y) {
            cout << "divisao impossivel" << endl;
        } else {
            z = (x*1.0)/y;
            cout << fixed << z << endl;
        }
    }
    return 0;
}