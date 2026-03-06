#include <stdio.h>

int main(){
   // float temp [24];
    //int i;
   // for (i = 0; i < 24; i++){
       // printf("%.1f", temp[i]);
   // }
    int opcion;
    int repetir;
    int n;
    int i;
    printf("Cuantos numeros quieres en el arreglo?: ");
    scanf("%d", &n);
    float temp [n];
    do{
    for (i = 0; i < n; i++){
        printf("dame que quieres poner en tu dato: \n");
        scanf("%d",&temp[i]);
    }
    printf("salir (1)\n");
    printf("repetir (2)\n");
    scanf("%d",&opcion);


    }while (opcion == 2);

}
