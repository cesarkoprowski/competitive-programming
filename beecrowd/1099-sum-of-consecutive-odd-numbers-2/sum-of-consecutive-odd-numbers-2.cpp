#include <iostream>

using namespace std;

int main() {
    int n, n1, n2;
    int o_aux, aux;
    cin >> n;
    for (int j = 0; j < n; j++) {
        o_aux = 0;
        cin >> n1 >> n2;
        if (n1 > n2) {
            aux = n2;
            n2 = n1;
            n1 = aux;
        }
        for (int i = n1+1; i < n2; i++) {
            if (i % 2) {
                o_aux+=i;
            }
        }
        cout << o_aux << endl;
    }
    return 0;
}