#include <iostream>

using namespace std;

int main() {
    int n;
    int i;
    int v[46];
    int aux = 1;
    v[0] = 0;
    cin >> n;
    cout << v[0];
    for(int i = 1; i < n; i++) {
        v[i] = aux;
        cout << " " << v[i];
        aux = v[i-1] + v[i];
    }
    cout << endl;
    return 0;
}