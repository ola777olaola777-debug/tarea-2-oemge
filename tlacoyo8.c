/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 13 */
#include <stdio.h>

int main() {
    int n, i, suma = 0;
    int arreglo[100];

    printf("Cuantos elementos tendra el arreglo (maximo 100): ");
    scanf("%d", &n);

    // Capturamos cada elemento y lo sumamos al acumulado
    for (i = 0; i < n; i++) {
        printf("Ingresa el valor [%d]: ", i);
        scanf("%d", &arreglo[i]);
        suma += arreglo[i];
    }

    printf("\nLa suma total de los elementos es: %d\n", suma);

    return 0;
}
