#include <iostream>

using namespace std;

int main() {
    float n;
    float media;
    int aux;
    int i = 1;
    while (i == 1) {
        aux = 0;
        media = 0;
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
        while (true) { 
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> i;
            if (i == 1 || i == 2) {
                break;
            }
        }
    }
    return 0;
}