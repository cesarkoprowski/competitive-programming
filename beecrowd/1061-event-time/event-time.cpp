#include <iostream>

using namespace std;

int scan_time(int h[]);
void print_time(int d1, int d2, int h1[], int h2[]);
int calculate_seconds(int s1, int s2, int &m_aux);
int calculate_minutes(int m1, int m2, int m_aux, int &h_aux);
int calculate_hours(int h1[], int h2[], int h_aux);

int main() {
    int d1, d2;
    int h1[3], h2[3];
    d1 = scan_time(h1);
    d2 = scan_time(h2);
    print_time(d1, d2, h1, h2);
    return 0;
}

int scan_time(int h[]) {
    int d;
    string d_label, colon;
    cin >> d_label >> d;
    cin >> h[0] >> colon >> h[1] >> colon >> h[2];
    return d;
}

void print_time(int d1, int d2, int h1[], int h2[]) {
    int seconds, minutes, hours, days = d2 - d1;
    int m_aux = 0, h_aux = 0;
    seconds = calculate_seconds(h1[2], h2[2], m_aux);
    minutes = calculate_minutes(h1[1], h2[1], m_aux, h_aux);
    hours = calculate_hours(h1, h2, h_aux);
    if (h1[0] > h2[0] || (h1[0] == h2[0] && h1[1] > h2[1]) || 
    (h1[0] == h2[0] && h1[1] == h2[1] && h1[2] > h2[2])) {
        days--;
    }
    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;
}

int calculate_seconds(int s1, int s2, int &m_aux) {
    if (s1 > s2) {
        m_aux = 1;
        return 60 - (s1 - s2);
    } else {
        return s2 - s1;
    }
}

int calculate_minutes(int m1, int m2, int m_aux, int &h_aux) {
    if (m1 > m2) {
        h_aux = 1;
        return 60 - (m1 - m2) - m_aux;
    } else {
        return m2 - m1 - m_aux;
    }
}

int calculate_hours(int h1[], int h2[], int h_aux) {
    int hours = h2[0] - h1[0] - h_aux;
    if (hours < 0) {
        return 24 + hours;
    }
    return hours;
}