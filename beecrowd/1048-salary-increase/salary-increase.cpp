#include <iostream>

using namespace std;

int main() {
    float salary, readjust;
    cin >> salary;
    if (salary <= 400) {
        readjust = 0.15;
    } else if (salary <= 800) {
        readjust = 0.12;
    } else if (salary <= 1200) {
        readjust = 0.10;
    } else if (salary <= 2000) {
        readjust = 0.07;
    } else {
        readjust = 0.04;
    }
    cout.precision(2);
    cout << "Novo salario: " << fixed << (salary+(salary*readjust)) << endl;
    cout << "Reajuste ganho: " << readjust*salary << endl;
    cout.precision(0);
    cout << "Em percentual: " << fixed << readjust*100 << " %" << endl;
    return 0;
}