#include <iostream>

using namespace std;

int main() {
    int x, z;
    int aux = 0;
    int sum = 0;
    cin >> x;
    z = x;
    while (z <= x) {
        cin >> z;
    } 
    while (sum < z) {
        sum += x;
        x++;
        aux++;
    }
    cout << aux << endl;
    return 0;
}