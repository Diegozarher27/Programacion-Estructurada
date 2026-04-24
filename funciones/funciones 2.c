#include <stdio.h>

void mostrar(int v[3][3], int filas, int columnas){
    int i, j;
    for (i = 0; i < filas; i++){
        for (j = 0; j < columnas; j++){
            printf("%d ",  v[i][j]);
        }
        printf("\n");
    }
}
void capturar (int m[3][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &m[i][j]);
        }
    }
}
int diagonal (int m[3][3]){
   int suma = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i == j){
                suma = suma + m[i][j];
            }
        }
    }
    return suma;
}
void guardar (int m[3][3]){
    FILE *f;
    f = fopen("resultado.txt","w");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            fprintf(f,"(%d)", m[i][j]);
        }
        fprintf(f, "\n");
    }
    int resultado = diagonal(m);
    fprintf(f, "resultado de la diagonal: %d", resultado);
    fclose(f);
}
int main(){
    int u[3][3];
    capturar (u);
    mostrar(u, 3, 3);
    int resultado = diagonal(u);
    printf ( "resultado de la diagonal: %d", resultado);
    guardar(u);
}
