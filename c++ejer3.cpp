#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char sucursales[25][20];
    int ventas[25];
    int suma = 0;
    float promedio;

    srand(time(0));

    for (int i = 0; i < 25; i++) {
        sprintf(sucursales[i], "Sucursal %d", i + 1);
        ventas[i] = rand() % 9001 + 1000; 
        suma += ventas[i];
    }

    promedio = suma / 25.0;

    printf("Promedio de ventas: %.2f\n", promedio);
    printf("Sucursales con ventas mayores al promedio:\n");

    for (int i = 0; i < 25; i++) {
        if (ventas[i] > promedio) {
            printf("%s - Ventas: %d\n", sucursales[i], ventas[i]);
        }
    }

    return 0;
}