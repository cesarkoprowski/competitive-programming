#include <iostream>

using namespace std;

int main() {
    float n[6];
    int aux = 0;
    for(int i = 0; i < 6; i++) {
        cin >> n[i];
        if (n[i] > 0) {
            aux++;
        }
    }
    cout << aux << " valores positivos" << endl;
    return 0;
}