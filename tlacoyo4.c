/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 8 */
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingresa el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero entero: ");
    scanf("%d", &num2);

    // Validamos que ninguno sea cero para evitar error al dividir
    if (num1 == 0 || num2 == 0) {
        printf("\nNo se puede dividir entre cero.\n");
    } else if (num1 % num2 == 0) {
        printf("\n%d es divisor de %d.\n", num2, num1);
    } else if (num2 % num1 == 0) {
        printf("\n%d es divisor de %d.\n", num1, num2);
    } else {
        printf("\nNinguno de los numeros es divisor del otro.\n");
    }

    return 0;
}
