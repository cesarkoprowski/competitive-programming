#include <iostream>

using namespace std;

int main() {
    int x = 0;
    int y = 0;
    while (1) {
        cin >> x >> y;
        if (x == y) {
            break;
        } else if (x < y) {
            cout << "Crescente" << endl;
        } else {
            cout << "Decrescente" << endl;
        }
    }
    return 0;
}