/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 5 */
#include <stdio.h>
#define DESCUENTO 0.08
#define LIMITE_COMPRA 2500.0

int main() {
    float montoCompra, rebaja = 0, totalPagar;

    printf("Ingresa el monto de la compra: $");
    scanf("%f", &montoCompra);

    if (montoCompra > LIMITE_COMPRA) {
        rebaja = montoCompra * DESCUENTO;
    }

    totalPagar = montoCompra - rebaja;

    printf("\nDescuento aplicado: $%.2f\n", rebaja);
    printf("Total a pagar: $%.2f\n", totalPagar);

    return 0;
}
