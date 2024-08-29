#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    double wa = 2, wb = 3, wc = 5;
    double media;
    cin >> a >> b >> c;
    a = a * wa;
    b = b * wb;
    c = c * wc;
    media = (a + b + c) / (wa + wb + wc);
    printf("MEDIA = %.1lf\n", media);
    return 0;
}