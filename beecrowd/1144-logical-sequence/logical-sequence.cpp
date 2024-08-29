#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (1 < n && n < 1000) { 
            break;
        }
    }
    for (long double i = 1; i <= n; i++) {
        cout << fixed << setprecision(0);
        cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;
        cout << i << " " << pow(i, 2) + 1 << " " << pow(i, 3) + 1 << endl;
    }
    return 0;
}
