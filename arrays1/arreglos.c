#include <stdio.h>

int main(){
    float temp1, temp2;
    float temp [24];
    int dummy;
    temp[0] = 20.5;
    temp[1] = 18.2;
    printf("direccion de memoria de 2 flotantes:\n&temp1: %i \n&temp2: %i\n", &temp1, &temp2);
    printf("direccion de memoria &temp [24]: %i \n", &temp);
    printf("direccion de memoria &temp [24]: %i \n", &temp[23]);
    printf("direccion de memoria &dummy : %i \n", &dummy);
    printf("%f\n" "%f", temp[0],temp[1]);
}

