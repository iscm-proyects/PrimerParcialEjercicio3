#include <stdio.h>

void suma(int *a, int *b, int *resultado) {
    *resultado = *a + *b;
}

void resta(int *a, int *b, int *resultado) {
    *resultado = *a - *b;
}

void multiplicacion(int *a, int *b, int *resultado) {
    *resultado = *a * *b;
}

void division(int *a, int *b, int *resultado) {
    if (*b != 0) {
        *resultado = *a/ *b;
    }
}

int main() {
    int num1, num2;
    int resultado_int;


    // Solicita dos numeros
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    suma(&num1, &num2, &resultado_int);
    printf("Suma: %d\n", resultado_int);

    resta(&num1, &num2, &resultado_int);
    printf("Resta: %d\n", resultado_int);

    multiplicacion(&num1, &num2, &resultado_int);
    printf("Multiplicacion: %d\n", resultado_int);

    division(&num1, &num2, &resultado_int);
    printf("Division: %d\n", resultado_int);

    return 0;
}