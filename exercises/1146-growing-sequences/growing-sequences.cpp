#include <iostream>

using namespace std;

int main() {
    int n = 1;
    while (n) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cout << i;
            if (i != n) {
                cout << " ";
            } else {
                cout << endl;
            }
        }
    }
    return 0;
}