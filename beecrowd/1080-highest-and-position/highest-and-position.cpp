#include <iostream>

using namespace std;

int main() {
    int n;
    int higher = 0;
    int aux = 0;
    for (int i = 1; i <= 100; i++) {
        cin >> n;
        if (n > higher) {
            higher = n;
            aux = i;
        }
    }
    cout << higher << endl << aux << endl;
    return 0;
}