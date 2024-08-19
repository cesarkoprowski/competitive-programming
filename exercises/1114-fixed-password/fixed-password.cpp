#include <iostream>

using namespace std;

int main() {
    int p;
    int r = 2002;
    while (1) {
        cin >> p;
        if (p == r) {
            cout << "Acesso Permitido" << endl;
            break;
        } else {
            cout << "Senha Invalida" << endl;
        }
    }
    return 0;
}