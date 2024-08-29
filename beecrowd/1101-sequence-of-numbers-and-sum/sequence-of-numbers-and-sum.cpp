#include <iostream>

using namespace std;

int main() {
    int m, n;
    int aux;
    int sum;
    for (int i = 0; ; i++) {
        sum = 0;
        cin >> m >> n;
        if (((m == 0) || (n == 0)) || ((m < 0) || (n < 0))) {
            break;
        }
        if (m > n) {
            aux = m;
            m = n;
            n = aux;
        }
        for (int j = m; j <= n; j++) {
            cout << j << " ";
            sum += j;
        }
        cout << "Sum=" << sum << endl;
    }
    return 0;
}