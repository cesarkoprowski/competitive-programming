#include <iostream>

using namespace std;

typedef struct regist {
    char name[10];
    double salary;
    double solded;
} Regist;

int main() {
    Regist worker;
    double total;
    cin >> worker.name >> worker.salary >> worker.solded;
    total = worker.salary + (worker.solded * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}