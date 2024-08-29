#include <iostream>

using namespace std;

int main() {
    int n = 1;
    int i, g;
    int aux = 0;
    int i_aux = 0;
    int g_aux = 0;
    int draw = 0;
    while (n == 1) {
        aux++;
        cin >> i >> g;
        if (i > g) {
            i_aux++;
        } else if (i < g) {
            g_aux++;
        } else {
            draw++;
        }
        while (true) {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> n;
            if (n == 1 || n == 2) {
                break;
            }
        }
    }
    cout << aux << " grenais" << endl;
    cout << "Inter:" << i_aux << endl;
    cout << "Gremio:" << g_aux << endl;
    cout << "Empates:" << draw << endl;
    if (i_aux > g_aux) {
        cout << "Inter venceu mais" << endl;
    } else if (i_aux < g_aux) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Não houve vencedor" << endl;
    }
    return 0;
}