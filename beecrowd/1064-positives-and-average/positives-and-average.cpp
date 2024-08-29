#include <iostream>

using namespace std;

int main () {
    float n[6];
    int aux = 0;
    float media = 0;
    for (int i = 0; i < 6; i++) {
        cin >> n[i];
        if (n[i] > 0) {
            aux++;
            media += n[i];
        }
    }
    cout.precision(1);
    cout << aux << " valores positivos" << endl;
    cout << fixed << media/aux << endl;
    return 0;
}