#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int g = 0;
    int d = 0;
    int n = 1;
    while (n != 4) {
        cin >> n;
        if (n == 1) {
            a++;
        } else if (n == 2) {
            g++;
        } else if (n == 3) {
            d++;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;
    return 0;
}