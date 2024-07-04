#include <iostream>

using namespace std;

double calculateVolume(double r);

int main() {
    double radius, volume;
    cin >> radius;
    volume = calculateVolume(radius);
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}

double calculateVolume(double r) {
    double v;
    r = r * r *r;
    v = (4.0/3) * 3.14159 * r;
    return v;
}