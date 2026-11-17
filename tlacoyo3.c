/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 7 */
#include <stdio.h>
#define COSTO_KM 0.23

int main() {
    float distIda, distTotal, precio;
    int dias;

    printf("Ingresa la distancia de ida (en km): ");
    scanf("%f", &distIda);
    printf("Ingresa los dias de estancia: ");
    scanf("%d", &dias);

    // La distancia total es de ida y vuelta
    distTotal = distIda * 2;
    precio = distTotal * COSTO_KM;

    // Se aplica 30% de descuento si cumple ambas condiciones
    if (dias > 7 && distTotal > 800) {
        precio = precio - (precio * 0.30);
    }

    printf("\nDistancia total (ida y vuelta): %.2f km\n", distTotal);
    printf("Costo final del boleto: $%.2f\n", precio);

    return 0;
}
