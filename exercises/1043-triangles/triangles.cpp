#include <iostream>
#include <cmath>

using namespace std;

void verify_triangle(float a, float b, float c);
void perimeter(float a, float b, float c);
void area_of_trapezium(float a, float b, float c);

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    verify_triangle(a, b, c);
    return 0;
}

void verify_triangle(float a, float b, float c) {
    int aux;
    if (((b + c) > a) && ((b - c) < a)) {
        perimeter(a, b, c);
    } else {
        area_of_trapezium(a, b, c);
    }
}

void perimeter(float a, float b, float c) {
    cout.precision(1);
    cout << "Perimetro = " << fixed << a + b + c << endl;
}

void area_of_trapezium(float a, float b, float c) {
    cout.precision(1);
    cout << "Area = " << fixed << ((a+b)*c)/2 << endl;
}
