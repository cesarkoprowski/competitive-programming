#include <iostream>

using namespace std;

typedef struct especification {
    int hours;
    int speed;
    double consumption;
} Especification;

void fuelSpent(Especification valueFL);

int main() {
    Especification value;
    cin >> value.hours >> value.speed >> value.consumption;
    fuelSpent(value);
    return 0;
}

void fuelSpent(Especification valueFL) {
    printf("%.3lf\n", (valueFL.hours * valueFL.speed) / valueFL.consumption);
}