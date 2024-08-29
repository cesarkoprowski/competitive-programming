#include <iostream>

using namespace std;

int main() {
    int n[5];
    int e_aux = 0;
    int o_aux = 0;
    int p_aux = 0;
    int n_aux = 0;
    for (int i = 0; i < 5; i++) {
        cin >> n[i];
        if (!(n[i] % 2)) {
            e_aux++;
        } else {
            o_aux++;
        }
        if (n[i] > 0) {
            p_aux++;
        } else if (n[i] < 0) {
            n_aux++;
        }
    }
    cout << e_aux << " valor(es) par(es)" << endl;
    cout << o_aux << " valor(es) impar(es)" << endl;
    cout << p_aux << " valor(es) positivo(s)" << endl;
    cout << n_aux << " valor(es) negativo(s)" << endl;
    return 0;
}