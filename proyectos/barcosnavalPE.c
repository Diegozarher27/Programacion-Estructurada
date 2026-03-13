#include <stdio.h>
int main() {
    int tablero[5][5];
    int fila, columna;
    int i,j;
    //   Inicializar tablero
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            tablero[i][j] = 0;
            }
        }
    // Colocar barcos manualmente
    tablero[1][2] = 1;
    tablero[3][4] = 1;
    tablero[0][0] = 1;
    // Mostrar tablero inicial
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("(%d)", tablero[i][j]);
            }
            printf("\n");
        }
        // Pedir disparo
        int contadordebarcos = 0;
        do{
        printf("Fila: ");
        scanf("%d", &fila);

        printf("Columna: ");
        scanf("%d", &columna);
        fila--;
        columna--;
        if(fila < 0 || fila > 4 || columna < 0 || columna > 4){
        printf("Las coordenadas no estan dentro del tablero.\n");
        }

        else if (tablero [fila][columna] == 1){
            tablero [fila][columna] = 2;
            printf("le haz dado.\n");
            contadordebarcos++;
            printf("llevas %d barcos derrumbados\n", contadordebarcos);
            }
        else if (tablero [fila][columna] == 0){
                 tablero [fila][columna] = 3;
                printf("disparo fallido.\n");
                printf("llevas %d barcos derrumbados\n", contadordebarcos);

            }
        else{
            printf("ya habias disparado en estas coordenadas\n");

        }
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){



            printf("(%d)", tablero[i][j]);
            }

             printf("\n");
        }
        // AQUÍ DEBES COMPLETAR:
        // evaluar si hay barco o agua
        }while(contadordebarcos < 3);
        printf("acabaste el juego, felicidades cawn.");
        return 0;
}





