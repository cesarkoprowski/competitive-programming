#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    double r1, r2;
    double d;
    cin >> a >> b >> c;
    d = pow(b, 2) - (4 * a * c);
    if (a == 0 || d < 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    r1 = (-b+sqrt(d)) / (2*a);
    r2 = (-b-sqrt(d)) / (2*a);
    cout.precision(5);
    cout << "R1 = " << fixed << r1 << endl;
    cout << "R2 = " << fixed << r2 << endl;
    return 0;
}
