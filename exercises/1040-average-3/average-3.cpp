#include <iostream>

using namespace std;

int main() {
    float n1, n2, n3, n4;
    float media;
    cin >> n1 >> n2 >> n3 >> n4;
    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
    cout.precision(1);
    cout << "Media: " << fixed << media << endl;
    if (media < 5) {
        cout << "Aluno reprovado." << endl;
    } else if (media < 7) {
        cout << "Aluno em exame." << endl;
        float exam;
        cin >> exam;
        cout << "Nota do exame: " << fixed << exam << endl;
        media = (media+exam)/2;
        if (media > 5) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << media << endl;
    } else {
        cout << "Aluno aprovado." << endl;
    }
    return 0;
}