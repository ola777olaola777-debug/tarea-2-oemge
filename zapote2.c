/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 14 */
#include <stdio.h>

int main() {
    int n, i, buscar, repeticiones = 0;
    int datos[100];

    printf("Cuantos elementos tendra el arreglo (maximo 100): ");
    scanf("%d", &n);

    // Llenamos el arreglo con los numeros enteros
    for (i = 0; i < n; i++) {
        printf("Ingresa el elemento [%d]: ", i);
        scanf("%d", &datos[i]);
    }

    printf("\nIngresa el numero entero que deseas buscar: ");
    scanf("%d", &buscar);

    // Recorremos el arreglo para contar las coincidencias
    for (i = 0; i < n; i++) {
        if (datos[i] == buscar) {
            repeticiones++;
        }
    }

    printf("\nEl numero %d aparece %d veces dentro del arreglo.\n", buscar, repeticiones);

    return 0;
}
