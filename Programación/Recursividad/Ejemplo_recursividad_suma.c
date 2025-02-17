#include <stdio.h>// sum(n) = n + sum(n-1) con sum(0)=0
int suma(int n) {
    if (n == 0) return 0;
    return n + suma(n-1);
}

int main() {
    int n = 5;
    printf("La suma de los primeros %d numeros es %d\n", n, suma(n));
    return 0;
}
