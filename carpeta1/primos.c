#include <stdio.h>

int main() {
    int numero, i, esPrimo = 1;

    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        esPrimo = 0;
    }

    for (i = 2; i < numero; i++) {
        if (numero % i == 0) {
            esPrimo = 0;
        }
    }

    if (esPrimo == 1) {
        printf("El numero es primo.\n");
    } else {
        printf("El numero no es primo.\n");
    }

    return 0;
}
