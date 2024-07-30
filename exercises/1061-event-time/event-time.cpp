#include <iostream>

using namespace std;

int scan_time(int &d, int h[]);
void print_time(int d1, int d2, int h1[], int h2[]);
int calculate_seconds(int s1, int s2);
int calculate_minutes(int m1, int m2, int &carry);
int calculate_hours(int h1[], int h2[], int &days);

int main() {
    int d1, d2;
    int h1[3], h2[3];
    d1 = scan_time(d1, h1);
    d2 = scan_time(d2, h2);
    print_time(d1, d2, h1, h2);
    return 0;
}

int scan_time(int &d, int h[]) {
    string day_label, colon;
    cin >> day_label >> d;
    cin >> h[0] >> colon >> h[1] >> colon >> h[2];
    return d;
}

void print_time(int d1, int d2, int h1[], int h2[]) {
    int seconds, minutes, hours, days = d2 - d1;
    int carry = 0; 
    seconds = calculate_seconds(h1[2], h2[2]);
    minutes = calculate_minutes(h1[1], h2[1], carry);
    hours = calculate_hours(h1, h2, days);
    if (seconds < 0) {
        seconds += 60;
        carry++;
    }
    if (minutes < 0) {
        minutes += 60;
        hours--;
    }
    if (hours < 0) {
        hours += 24;
        days--;
    }
    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;
}

int calculate_hours(int h1[], int h2[], int &days) {
    int hours = h2[0] - h1[0];
    if (hours < 0) {
        hours += 24;
        days--;
    }
    return hours;
}

int calculate_seconds(int s1, int s2) {
    return s2 - s1;
}

int calculate_minutes(int m1, int m2, int &carry) {
    return m2 - m1 - carry;
}