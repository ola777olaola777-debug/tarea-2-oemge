/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 10 */
#include <stdio.h>
#define CANTIDAD 100

int main() {
    int num, contador = 1;
    int pos = 0, neg = 0, nulos = 0;

    // Ciclo para pedir y clasificar los 100 numeros
    while (contador <= CANTIDAD) {
        printf("Ingresa el numero %d: ", contador);
        scanf("%d", &num);

        if (num > 0) {
            pos++;
        } else if (num < 0) {
            neg++;
        } else {
            nulos++;
        }

        contador++;
    }

    printf("\nResultados del conteo:\n");
    printf("Positivos: %d\n", pos);
    printf("Negativos: %d\n", neg);
    printf("Nulos (ceros): %d\n", nulos);

    return 0;
}
