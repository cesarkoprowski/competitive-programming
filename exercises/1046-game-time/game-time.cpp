#include <iostream>

using namespace std;

int main() {
    int h1, h2;
    cin >> h1 >> h2;
    cout << "O JOGO DUROU ";
    if (h1 > h2) {
        cout << (h2+24)-h1;
    } else if (h1 < h2) {
        cout << h2-h1;
    } else {
        cout << 24;
    }
    cout << " HORA(S)" << endl;
    return 0;
}