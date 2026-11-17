/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 15 */
#include <stdio.h>

int main() {
    int n, i;
    int pos = 0, neg = 0, nulos = 0;
    int arreglo[100];

    printf("Cuantos elementos tendra el arreglo (maximo 100): ");
    scanf("%d", &n);

    // Capturamos cada elemento y lo clasificamos segun su signo
    for (i = 0; i < n; i++) {
        printf("Ingresa el elemento [%d]: ", i);
        scanf("%d", &arreglo[i]);

        if (arreglo[i] > 0) {
            pos++;
        } else if (arreglo[i] < 0) {
            neg++;
        } else {
            nulos++;
        }
    }

    printf("\nResultados en el arreglo:\n");
    printf("Positivos: %d\n", pos);
    printf("Negativos: %d\n", neg);
    printf("Nulos: %d\n", nulos);

    return 0;
}
