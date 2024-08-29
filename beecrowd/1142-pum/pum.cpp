#include <iostream>

using namespace std;

int main() {
    int n;
    int aux = 0;
    cin >> n;
    for (int i = 1; i <= n*4; i++) {
        if (i % 4 == 0) {
            cout << "PUM" << endl;
        } else {
            cout << i << " ";
        }
    }
    return 0;
}