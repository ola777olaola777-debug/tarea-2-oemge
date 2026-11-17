/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 16 */
#include <stdio.h>

int main() {
    int pares[100];
    int i;

    // Guardamos los primeros 100 numeros pares (del 2 al 200)
    for (i = 0; i < 100; i++) {
        pares[i] = (i + 1) * 2;
    }

    printf("Los 100 primeros numeros pares son:\n\n");

    // Imprimimos todo el arreglo al final
    for (i = 0; i < 100; i++) {
        printf("Posicion [%d]: %d\n", i, pares[i]);
    }

    return 0;
}
