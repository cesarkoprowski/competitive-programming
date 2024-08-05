#include <iostream>

using namespace std;

int main() {
    int n;
    int v[10000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        if (!v[i]) {
            cout << "NULL" << endl;
        } else if (!(v[i] % 2)) {
            cout << "EVEN ";
            if (v[i] > 0) {
                cout << "POSITIVE" << endl;
            } else {
                cout << "NEGATIVE" << endl;
            }
        } else {
            cout << "ODD ";
            if (v[i] > 0) {
                cout << "POSITIVE" << endl;
            } else {
                cout << "NEGATIVE" << endl;
            }        
        }
    }
}