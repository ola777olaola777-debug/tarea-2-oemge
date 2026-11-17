/* Guadalupe Gonzalez Nestor Federico
Tarea 2 - Ejercicio 2 */
#include <stdio.h>
#define PI 3.141592

int main() {
    float radio, area, perimetro;

    printf("Introduce el radio del circulo: ");
    scanf("%f", &radio);

    area = PI * (radio * radio);
    perimetro = 2 * PI * radio;

    printf("\nArea del circulo: %.2f\n", area);
    printf("Circunferencia: %.2f\n", perimetro);

    return 0;
}
