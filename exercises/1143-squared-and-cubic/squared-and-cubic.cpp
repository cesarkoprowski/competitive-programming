#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (1 < n || n < 1000) {
            break;
        }
    }
    for (double i = 1; i <= n; i++) {
        cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;
    }
    return 0;
}