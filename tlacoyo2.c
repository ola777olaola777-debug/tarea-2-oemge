/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 6 */
#include <stdio.h>

int main() {
    float sueldo, aumento, sueldoFinal;

    printf("Ingresa el sueldo del trabajador: $");
    scanf("%f", &sueldo);

    // Si gana menos de 1000 le toca 15%, si no le toca 12%
    if (sueldo < 1000) {
        aumento = sueldo * 0.15;
    } else {
        aumento = sueldo * 0.12;
    }

    sueldoFinal = sueldo + aumento; // Se suma el aumento al sueldo base

    printf("\nAumento aplicado: $%.2f\n", aumento);
    printf("Nuevo sueldo: $%.2f\n", sueldoFinal);

    return 0;
}
