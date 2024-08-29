#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void calculateNotes(double value);

int main() {
    double value;
    cin >> value;
    calculateNotes(value);
    return 0;
}

void calculateNotes(double value) {
    float notes[6] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
    float coins[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01}; 
    int intValue;
    cout << fixed << setprecision(2);
    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
        int aux = value / notes[i];
        value -= aux * notes[i];
        cout << aux << " nota(s) de R$ " << notes[i] << endl; 
    }
    cout << "MOEDAS:" << endl;
    intValue = value * 100;
    for (int i = 0; i < 6; i++) {
        int aux = intValue / (coins[i]*100);
        intValue -= aux * (coins[i]*100);
        cout << aux << " moeda(s) de R$ " << coins[i] << endl; 
    }
}