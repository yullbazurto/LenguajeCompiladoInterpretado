#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int valor, pares = 0, impares = 0;

    
    srand(time(0));

    
    for (int i = 0; i < 500; i++) {
        valor = rand() % 51 + 50; 
        if (valor % 2 == 0) {
            pares++;  
        } else {
            impares++;  
        }
    }

    
    printf("Cantidad de valores pares: %d\n", pares);
    printf("Cantidad de valores impares: %d\n", impares);

    return 0;
}