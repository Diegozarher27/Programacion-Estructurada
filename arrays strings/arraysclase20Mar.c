
#include <stdio.h>
#include <string.h>
void cambiar (char palabra[]){
    int i;
    int largo = strlen(palabra);
    for (i=0;i<largo;i++){
        if (palabra[i]=='\n'){
            palabra[i] = '\0';
        }

    }

}

int main(){
    char nombre [4][20];
    int i=0;
    for (i=0;i<4;i++){
        printf("escribe tu nombre: ");
        cambiar(nombre);
        fgets(nombre,sizeof(nombre),stdin);
        printf("la direccion de memoria de tus nombres (de 20 en 20 por la cantidad de caracteres de el arreglo ) es: %d\n",&nombre[i]);
        printf("tu nombre completo es: %s\n",nombre);
    }
    for(i=0;i<4;i++){
            int numero[5];
            printf("dame un numero: \n");
            scanf("%d",&numero);
            printf("la direccion de memoria de estos numeros ( de 4 en 4 ) es: %d\n",&numero[i]);
            }
            printf("\n\n\n");
    for(i=0;i<4;i++){
        char blabla [5];
            printf("direccion de memoria de los caracteres ( de uno en uno ): %d\n", &blabla[i]);
            printf("%d\n", blabla);
    }

}

