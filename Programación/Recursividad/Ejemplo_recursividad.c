#include <stdio.h>

// Funcion recursiva para calcular el factorial de n
unsigned long factorial(unsigned int n) {
    // Caso base
    if (n == 0) {
        return 1;
    }
    // Caso recursivo
    return n * factorial(n - 1);
}

int main() {
    unsigned int num = 5;
    printf("El factorial de %u es %lu\n", num, factorial(num));
    return 0;
}


