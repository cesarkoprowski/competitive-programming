#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout.precision(0);
    for (int i = 2; i <= n; i++) {
        if (!(i % 2)) {
            cout << i << "^2 = " << fixed << pow(i,2) << endl;
        }
    }
    return 0;
}