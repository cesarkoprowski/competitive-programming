#include <iostream>

using namespace std;

typedef struct regist {
    int productCode[2];
    int unit[2];
    double priceUnit[2];
} Regist;

double learnProduct(Regist productL);

int main() {
    Regist product;
    double valor;
    valor = learnProduct(product);
    printf("VALOR A PAGAR: R$ %.2lf\n", valor);
    return 0;
}

double learnProduct(Regist productL) {
    double soma = 0;
    int i;
    for (i = 0; i < 2; i++) {
        scanf("%d%d%lf", &productL.productCode[i], &productL.unit[i], &productL.priceUnit[i]);
        soma += productL.unit[i] * productL.priceUnit[i];
    }
    return soma;
}