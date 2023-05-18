#include <stdio.h>

int restar(int a, int b);

int main() {
    int num1, num2, resultado;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el numero que le quiere restar: ");
    scanf("%d", &num2);
    resultado = restar(num1, num2);
    printf("La resta de %d - %d = %d\n", num1, num2, resultado);
    return 0;
}

int restar(int a, int b) {
    int resta = a - b;
    return resta;
}