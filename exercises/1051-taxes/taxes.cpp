#include <iostream>

using namespace std;

int main() {
    float value;
    cin >> value;
    cout.precision(2);
    cout << fixed;
    if (value <= 2000) {
        cout << "Isento" << endl;
    } else if (value <= 3000) {
        cout << "R$ " << (value-2000)*0.08 << endl;
    } else if (value <= 4500) {
        cout << "R$ " << ((value-3000)*0.18)+80 << endl;
    } else {
        cout << "R$ " << ((value-4500)*0.28)+350 << endl;
    }
    return 0;
}