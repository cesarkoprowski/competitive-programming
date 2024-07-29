#include <iostream>

using namespace std;

void print_hours(int h1, int h2, int m1, int m2);
void print_minutes(int m1, int m2);

int main() {
    int h1, h2;
    int m1, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    print_hours(h1, h2, m1, m2);
    return 0;
}

void print_hours(int h1, int h2, int m1, int m2) {
    int aux = 0;
    if (m1 > m2) {
        aux = 1;
    }
    cout << "O JOGO DUROU ";
    if (h1 > h2) {
        cout << ((h2+24)-h1)-aux; 
    } else if (h1 < h2) {
        cout << (h2-h1)-aux;
    } else if (h1 == h2) {
        if (m1 == m2) {
            cout << 24;
        } else if (m1 > m2) {
            cout << 24-aux;
        } else {
            cout << 0;
        }
    }
    cout << " HORA(S) E ";
    print_minutes(m1, m2);
}

void print_minutes(int m1, int m2) {
    if (m1 > m2) {
        cout << (m2+60)-m1;
    } else if (m1 < m2) {
        cout << m2-m1;
    } else {
        cout << "0";
    }
    cout << " MINUTO(S)" << endl;
}