/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 3 */
#include <stdio.h>
#define TIPO_CAMBIO 11.96

int main() {
    float dolares, pesos;

    printf("Ingresa la cantidad en dolares: ");
    scanf("%f", &dolares);

    pesos = dolares * TIPO_CAMBIO;

    printf("\nEquivalente en pesos mexicanos: $%.2f MXN\n", pesos);

    return 0;
}
