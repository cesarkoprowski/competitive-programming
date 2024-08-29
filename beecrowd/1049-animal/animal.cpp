#include <iostream>

using namespace std;

int main() {
    string w1, w2, w3;
    cin >> w1 >> w2 >> w3;
    if (w1 == "vertebrado") {
        if (w2 == "ave") {
            if (w3 == "carnivoro") {
                cout << "aguia" << endl;
            } else {
                cout << "pomba" << endl;
            }
        } else {
            if (w3 == "onivoro") {
                cout << "homem" << endl;
            } else {
                cout << "vaca" << endl;
            }
        }
    } else {
        if (w2 == "inseto") {
            if (w3 == "hematofago") {
                cout << "pulga" << endl;
            } else {
                cout << "lagarta" << endl;
            }
        } else {
            if (w3 == "hematofago") {
                cout << "sanguessuga" << endl;
            } else {
                cout << "minhoca" << endl;
            }
        }    
    }
    return 0;
}