#include <iostream>

using namespace std;

int main() {
    int x;
    int y;
    while (true) {
        cin >> x >> y;
        if ((1 < x && x < 20) && (x < y && y < 100000)) { 
            break;
        }
    }
    for (int i = 1; i <= y; i++) {
        if (!(i % x)) {
            cout << i << endl;
        } else {
            cout << i << " ";
        }
    }
    return 0;
}
