#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void calculateNotes(float value);

int main() {
    float value;
    while(true) {
        cin >> value;
        if (value >= 0) {
            break;
        }
    }
    calculateNotes(value);
    return 0;
}

void calculateNotes(float value) {
    cout << "NOTAS:" << endl;
    int notes[] = {100, 50, 20, 10, 5, 2};
    for (int note : notes) {
        int count = value / note;
        cout << count << " nota(s) de R$ " << note << ".00" << endl;
        value -= count * note;
    }
    value = round(value * 100);
    value = value / 100;
    cout << "MOEDAS:";
    float coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    for (float coin : coins) {
        int count = value / coin;
        cout << "\n" << count << " moeda(s) de R$ " << fixed << setprecision(2) << coin;
        value -= count * coin;
    }
}