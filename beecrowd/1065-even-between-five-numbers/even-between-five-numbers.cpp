#include <iostream>

using namespace std;

int main() {
    int n[5];
    int aux = 0;
    for (int i = 0; i < 5; i++) {
        cin >> n[i];
        if (!(n[i] % 2)) {
            aux++;
        }
    }
    cout << aux << " valores pares" << endl;
    return 0;
}