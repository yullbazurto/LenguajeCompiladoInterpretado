#include <stdio.h>

int main() {
    int numeros[10];  
    int suma = 0;     
    float promedio;   
    
    
    printf("Ingresa 10 valores:\n");
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
        suma += numeros[i];  
    }

    
    promedio = suma / 10.0;

   
    printf("\nLa suma de los valores es: %d\n", suma);
    printf("El promedio de los valores es: %.2f\n", promedio);

    return 0;
}
