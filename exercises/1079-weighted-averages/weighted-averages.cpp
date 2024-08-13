#include <iostream>

using namespace std;

int main() {
    int n;
    float a = 0, b = 0, c = 0;
    float media;
    cin >> n;
    cout.precision(1);
    for (int i = 0; i < n; i++) {
        media = 0;
        cin >> a >> b >> c;
        media = (a*2) + (b*3) + (c*5);
        cout << fixed << media/(2+3+5) << endl;
    }
    return 0;
}