#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    for (int i = 0; i < 6; x++) {
        if (x % 2) {
            cout << x << endl;
            x++;
            i++;
        }
    }
    return 0;
}