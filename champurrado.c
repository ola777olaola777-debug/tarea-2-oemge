/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 1 */
#include <stdio.h>

int main() {
    float num1, num2;
    float suma, resta, mult;

    printf("Ingresa el primer valor: ");
    scanf("%f", &num1);
    printf("Ingresa el segundo valor: ");
    scanf("%f", &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;

    printf("\nResultados:\n");
    printf("Suma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Multiplicacion: %.2f\n", mult);

    return 0;
}
