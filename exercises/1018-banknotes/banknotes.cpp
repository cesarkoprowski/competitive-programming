#include <iostream>

using namespace std;

void decomposeValue(int valueD);

int main() {
    int value;
    cin >> value;
    cout << value << endl;
    decomposeValue(value);
}

void decomposeValue(int valueD) {
    float aux = 0;
    aux = valueD / 100;
    valueD = valueD - (aux * 100);
    cout << aux << " nota(s) de R$ 100,00" << endl;
    aux = valueD / 50;
    valueD = valueD - (aux * 50);
    cout << aux << " nota(s) de R$ 50,00" << endl;
    aux = valueD / 20;
    valueD = valueD - (aux * 20);
    cout << aux << " nota(s) de R$ 20,00" << endl;
    aux = valueD / 10;
    valueD = valueD - (aux * 10);
    cout << aux << " nota(s) de R$ 10,00" << endl;
    aux = valueD / 5;
    valueD = valueD - (aux * 5);
    cout << aux << " nota(s) de R$ 5,00" << endl;
    aux = valueD / 2;
    valueD = valueD - (aux * 2);
    cout << aux << " nota(s) de R$ 2,00" << endl;
    aux = valueD / 1;
    valueD = valueD - (aux * 1);
    cout << aux << " nota(s) de R$ 1,00" << endl;
}