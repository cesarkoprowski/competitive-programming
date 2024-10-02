#include <bits/stdc++.h>

using namespace std;

int main() {
    double s = 1;
    for (int i = 2; i <= 100; i++) {
        s += 1.0/i;
    }
    printf("%.2lf", s);
    return 0;
}