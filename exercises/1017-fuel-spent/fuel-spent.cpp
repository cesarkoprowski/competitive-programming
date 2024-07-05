#include <iostream>

using namespace std;

int main() {
    double hours, speed, consumption;
    cin >> hours >> speed;
    consumption = (hours*speed)/12;
    printf("%.3lf\n", (hours*speed)/12);
    return 0;
}