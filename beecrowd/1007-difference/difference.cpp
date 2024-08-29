#include <iostream>

using namespace std;

int difMulti(int e, int f, int g, int h);

int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a = difMulti(a, b, c, d);
    cout << "DIFERENCA = " << a << endl;
    return 0;
}

int difMulti(int e, int f, int g, int h) {
    e = e * f;
    g = g * h;
    e = e - g;
    return e;
}