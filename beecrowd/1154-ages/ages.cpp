#include <iostream>

using namespace std;

int main() {
    double n = 0;
    double count = 0;
    int aux = 0;
    while (true) {
        cin >> n;
        if (n >= 0) {
            count += n;
            aux++;
        } else {
            break;
        }
    }
    cout.precision(2);
    cout << fixed << count/aux << endl;
    return 0;
}