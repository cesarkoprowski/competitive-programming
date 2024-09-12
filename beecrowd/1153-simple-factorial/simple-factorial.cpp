#include <iostream>

using namespace std;

int main() {
    int n;
    int count = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        count *= i;
    }
    cout << count << endl;
    return 0;
}