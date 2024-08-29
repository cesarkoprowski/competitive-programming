#include <iostream>

using namespace std;

void decomposeDays(int days);

int main() {
    int value;
    cin >> value;
    decomposeDays(value);
    return 0;
}

void decomposeDays(int days) {
    int months, years;
    years = days / 365;
    days %= 365;
    months = days / 30;
    days %= 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
}