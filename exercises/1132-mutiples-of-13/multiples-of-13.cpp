#include <iostream>

using namespace std;

int main() {
    int x, y;
    int aux;
    int sum = 0;
    cin >> x >> y;
    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }
    for (int i = x; i <= y; i++) {
        if (i % 13) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}