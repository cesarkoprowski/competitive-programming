#include <iostream>
using namespace std;

int main() {
    int m[5][5];
    int ai, aj;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> m[i][j];
            if (m[i][j] == 1) {
                ai = i;
                aj = j;
            }
        }
    }
    cout << (abs(ai - 2) + abs(aj - 2)) << endl;
    return 0;
}
