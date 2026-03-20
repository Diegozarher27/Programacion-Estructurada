#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablero[5][5];
    char nombre[20];
    for(int i=0; i<5;i++){
        for(int j=0;j<5;j++){
            tablero[i][j]= '~';
            tablero[1][2]= 'B';
            tablero[3][4]= 'X';
            tablero[2][1]= 'O';
           printf("(%c)", tablero[i][j]);
        }
        printf("\n");
    }
    FILE *archivo;
    printf("dame tu nombre\n");
    fgets(nombre,sizeof(nombre),stdin);
    archivo = fopen("tablero.txt","w");
        for(int i=0; i<5;i++){
            for(int j=0;j<5;j++){
                fprintf(archivo, "(%c)", tablero[i][j]);
            }
            fprintf(archivo, "\n");
        }
            fprintf(archivo, "diego zaragoza\n");
            fclose(archivo);
            printf("cerrando el archivo...");
            archivo = fopen("tablero.txt","r");
            printf("archivo abierto en modo de lectura..");
            return 0;
}
