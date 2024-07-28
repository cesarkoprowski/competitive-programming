#include <iostream>
#include <cmath>

using namespace std;

void angle_of_triangle(double a, double b, double c);
void side_of_triangle(double a, double b, double c);

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a >= (b + c) || b >= (a + c) || c >= (a + b)) {
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    } else {
        if (b > a) swap(a, b);
        if (c > a) swap(a, c);
        angle_of_triangle(a, b, c);
    }
    return 0;
}

void angle_of_triangle(double a, double b, double c) {
    if (pow(a, 2) == (pow(b, 2) + pow(c, 2))) {
        cout << "TRIANGULO RETANGULO" << endl;
    } else if (pow(a, 2) > (pow(b, 2) + pow(c, 2))) {
        cout << "TRIANGULO OBTUSANGULO" << endl;
        side_of_triangle(a, b, c);
    } else if (pow(a, 2) < (pow(b, 2) + pow(c, 2))) {
        cout << "TRIANGULO ACUTANGULO" << endl;
        side_of_triangle(a, b, c);
    }
}

void side_of_triangle(double a, double b, double c) {
    if (a == b && a == c) {
        cout << "TRIANGULO EQUILATERO" << endl;
    } else if (a == b || a == c || b == c) { 
        cout << "TRIANGULO ISOSCELES" << endl;
    }
}
