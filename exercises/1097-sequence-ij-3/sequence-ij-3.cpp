#include <iostream>

using namespace std;

int main() {
    int i = 1;
    int j = 7;
    int aux = 1;
    while (i <= 9) {
        cout << "I=" << i;
        cout << " J=" << j << endl;
        j--;
        if (!(aux % 3)) {
            j = j + 5;
            i = i + 2;
        }
        aux++;
    }
    return 0;
}