#include <iostream>

using namespace std;

typedef struct value {
    double a;
    double b;
    double c;
} Value;

void rectangledTriangleArea(Value recTriMet);
void circleArea(Value circMet);
void trapeziumArea(Value trapMet);
void squareArea(Value squareMet);
void rectangleArea(Value recMet);

int main () {
    Value metric;
    cin >> metric.a >> metric.b >> metric.c;
    rectangledTriangleArea(metric);
    circleArea(metric);
    trapeziumArea(metric);
    squareArea(metric);
    rectangleArea(metric);
    return 0;
}

void rectangledTriangleArea(Value recTriMet) {
    double area;
    area = (recTriMet.a * recTriMet.c) / 2;
    printf("TRIANGULO: %.3lf\n", area);
}

void circleArea(Value circMet) {
    double area;
    area = (circMet.c * circMet.c) * 3.14159;
    printf("CIRCULO: %.3lf\n", area);
}

void trapeziumArea(Value trapMet) {
    double area;
    area = ((trapMet.a + trapMet.b) * trapMet.c) / 2;
    printf("TRAPEZIO: %.3lf\n", area);
}

void squareArea(Value squareMet) {
    double area;
    area = squareMet.b * squareMet.b;
    printf("QUADRADO: %.3lf\n", area);
}

void rectangleArea(Value recMet) {
    double area;
    area = recMet.a * recMet.b;
    printf("RETANGULO: %.3lf\n", area);
}