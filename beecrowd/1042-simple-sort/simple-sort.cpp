#include <iostream>
#define TAM 3

using namespace std;

void scanVector(int n1[], int n2[]);
void sortVector(int n[]);
void printVector(int n[]);

int main() {
    int n1[3], n2[3]; 
    scanVector(n1, n2);
    sortVector(n2);
    printVector(n2);
    cout << endl;
    printVector(n1);
    return 0;
}

void scanVector(int n1[], int n2[]) {
    cin >> n1[0] >> n1[1] >> n1[2];
    n2[0] = n1[0];
    n2[1] = n1[1];
    n2[2] = n1[2];
}

void sortVector(int n[]) {
    int aux;
    for (int i = 1; i < TAM; i++) {
        for (int j = i; j > 0; j--) {
            if (n[j] < n[j-1]) {
                aux = n[j];
                n[j] = n[j-1];
                n[j-1] = aux;
            }
        }
    }
}

void printVector(int n[]) {
    for (int i = 0; i < TAM; i++) {
        cout << n[i] << endl;
    }
}
