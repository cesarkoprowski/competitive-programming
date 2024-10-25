#include <bits/stdc++.h>

using namespace std;

int main() {
    double s = 1;
    int i, j, k;
    for (i = 1, j = 3, k = 2; j < 40; i++, j += 2, k *= 2) {
        s += j*1.0/k;
    }
    printf("%.2lf\n", s);
    return 0;
}