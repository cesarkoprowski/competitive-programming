#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int sum = 0;
    int a;
    cin >> a;
    while (n <= 0) {
        cin >> n;
    }
    for (int i = 1; i <= n; i++, a++) {
        sum += a;
    }
    cout << sum << endl;
    return 0;
}