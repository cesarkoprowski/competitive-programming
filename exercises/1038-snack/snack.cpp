#include <iostream>

using namespace std;

int main() {
    float codes[5] = {4, 4.5, 5, 2, 1.5};
    float units, code;
    cin >> code >> units;
    for(int i = 0; i < code; i++) {
        if (i == code-1) {
            cout.precision(2);
            cout << "Total: R$ " << fixed << codes[i]*units << endl;
            break;
        }
    } 
    return 0;
}