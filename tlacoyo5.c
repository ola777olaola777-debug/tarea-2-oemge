/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 9 */
#include <stdio.h>

int main() {
    int n, i, resultado;

    printf("Ingresa el numero para generar su tabla: ");
    scanf("%d", &n);

    printf("\nTabla de multiplicar del %d:\n", n);

    // Ciclo del 1 al 10 para multiplicar el numero ingresado
    for (i = 1; i <= 10; i++) {
        resultado = n * i;
        printf("%d x %d = %d\n", n, i, resultado);
    }

    return 0;
}
