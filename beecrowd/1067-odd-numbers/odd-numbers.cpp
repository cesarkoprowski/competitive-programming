#include <iostream>

using namespace std;

int main() {
    int x;
    int aux = 0;
    cin >> x;
    for (int i = 1; i <= x; i++) {
        if (i % 2) {
            cout << i << endl;
        }
    }
    return 0;
}