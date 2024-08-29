#include <iostream>

using namespace std;

int main() {
    int i;
    int j;
    for (i = 0; i <= 20; i = i + 2) {
        for (j = 1; j <= 3; j++) {
            cout << "I=" << i/10.0;
            cout << " J=" << (j)+(i/10.0) << endl;      
            
        }
    }
    return 0;
}