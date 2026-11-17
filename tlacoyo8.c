/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 12 */
#include <stdio.h>

int main() {
    int n, i;
    long long producto = 1;

    printf("Ingresa el valor de N: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("\nPor favor ingresa un numero natural mayor o igual a 1.\n");
    } else {
        // Multiplicamos desde 1 hasta N (factorial de N)
        for (i = 1; i <= n; i++) {
            producto *= i;
        }
        printf("\nEl producto de los primeros %d numeros naturales es: %lld\n", n, producto);
    }

    return 0;
}
