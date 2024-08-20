#include <iostream>

using namespace std;

int main() {
    float n;
    float media = 0;
    int aux = 0;
    while (aux<2) {
        cin >> n;
        if (n > 10 || n < 0) {
            cout << "nota invalida" << endl;
        } else {
            media += n;
            aux++;
        }
    }
    cout.precision(2);
    media = media/2;
    cout << fixed << "media = " << media << endl;
    return 0;
}