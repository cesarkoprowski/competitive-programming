#include <iostream>

using namespace std;

void decomposeTime(int secondT);

int main() {
    int second;
    cin >> second;
    decomposeTime(second);
    return 0;
}

void decomposeTime(int secondT) {
    int seconds, minutes, hours;
    seconds = secondT % 60;
    minutes = secondT / 60;
    hours = minutes / 60;
    minutes = minutes % 60;
    printf("%d:%d:%d\n", hours, minutes, seconds);
}