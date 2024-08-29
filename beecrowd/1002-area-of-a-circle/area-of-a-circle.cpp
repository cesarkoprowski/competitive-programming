#include <iostream>

using namespace std;

int main () {
    double r, a, pi = 3.14159;
    cin >> r;
    r = r * r;
    a = pi * r;
    printf("A=%.4lf\n", a);
    return 0;
}