/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 4 */
#include <stdio.h>

int main() {
    float capital, tasa, ganancia, montoFinal;

    printf("Ingresa el capital a invertir: $");
    scanf("%f", &capital);
    printf("Ingresa la tasa de interes mensual (%%): ");
    scanf("%f", &tasa);

    ganancia = capital * (tasa / 100);
    montoFinal = capital + ganancia;

    printf("\nInteres ganado en el mes: $%.2f\n", ganancia);
    printf("Monto total al finalizar el mes: $%.2f\n", montoFinal);

    return 0;
}
