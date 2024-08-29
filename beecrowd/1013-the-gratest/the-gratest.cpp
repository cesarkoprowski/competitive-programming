#include <iostream>

using namespace std;

typedef struct value {
    int a;
    int b;
    int c;
} Value;

int gratest(int num1, int num2);

int main () {
    int major;
    Value num;
    cin >> num.a >> num.b >> num.c;
    major = gratest(num.a, num.b);
    major = gratest(major, num.c);
    cout << major << " eh o maior" << endl;
    return 0;
}

int gratest(int num1, int num2) {
    int Gmajor, abs;
    abs = num1 - num2;
    if (abs < 0) {
        abs = abs * -1;
    }
    Gmajor = (num1 + num2 + abs) / 2;
    return Gmajor;
}