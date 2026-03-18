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

int main() {
    int tableroinicial [5][5];
    char nombrej1 [20];
    char nombrej2 [20];
    char barcosnombre [6][20];
    int cooin;
    int cooin2;
    printf("Este es el tablero inicial los barcos ya estan previamente puestos.\n");
    printf("el juego trata de que el primero que le atine a donde estan los barcos gana!\n");
    printf("SUERTE!\n");
    for (cooin=0;cooin<5;cooin++){
        for (cooin2=0;cooin2<5;cooin2++){
                tableroinicial[cooin][cooin2] = 0;
                printf("(%d)",tableroinicial [cooin][cooin2]);
            }
            printf("\n");
    }


    printf ("JUGADOR 1 ESCRIBE TU USERNAME. \n");
    fgets (nombrej1,sizeof(nombrej1),stdin);
    cambiar(nombrej1);
    printf("%s Dame el nombre de tus barco 1.\n",nombrej1);
    fgets(barcosnombre[0],sizeof(barcosnombre[0]),stdin);
    cambiar(barcosnombre[0]);
    printf("%s Dame el nombre de tus barco 2.\n",nombrej1);
    fgets(barcosnombre[1],sizeof(barcosnombre[1]),stdin);
    cambiar(barcosnombre[1]);
    printf("%s Dame el nombre de tus barco 3.\n",nombrej1);
    fgets(barcosnombre[2],sizeof(barcosnombre[2]),stdin);
    cambiar(barcosnombre[2]);
    printf ("JUGADOR 2 ESCRIBE TU USERNAME. \n");
    fgets (nombrej2,sizeof(nombrej2),stdin);
    cambiar(nombrej2);
    printf("%s Dame el nombre de tus barco 1.\n",nombrej2);
    fgets(barcosnombre[3],sizeof(barcosnombre[3]),stdin);
    cambiar(barcosnombre[3]);
    printf("%s Dame el nombre de tus barco 2.\n",nombrej2);
    fgets(barcosnombre[4],sizeof(barcosnombre[4]),stdin);
    cambiar(barcosnombre[4]);
    printf("%s Dame el nombre de tus barco 3.\n",nombrej2);
    fgets(barcosnombre[5],sizeof(barcosnombre[5]),stdin);
    cambiar(barcosnombre[5]);

    int tablero[5][5];
    int fila, columna;
    int contadordebarcos = 0;

    int i,j;

    int turno = 1;

    int tableroj2[5][5];
    int filaj2, columnaj2;
    int contadordebarcosj2 = 0;

    int h, o;

        for( i = 0; i < 5; i++) {
            for( j = 0; j < 5; j++) {
                tablero[i][j] = 0;
                tableroj2 [i][j]= 0;
                }
                printf("\n");
            }
            tablero[1][2] = 0;
            tablero[3][4] = 1;
            tablero[0][0] = 2;
            tableroj2[2][4] = 3;
            tableroj2[1][4] = 4;
            tableroj2[4][4] = 5;

            while(contadordebarcos < 3 && contadordebarcosj2 < 3){
                if (turno == 1){
                    printf("\n'Turno de %s'\n" ,nombrej1);
                    // Pedir disparo
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

                                else if (tablero [fila][columna] >= 1 && tablero [fila][columna] <= 3){
                                    int barco = tableroj2 [filaj2][columnaj2];
                                    printf("%s le haz dado al barco %s\n", nombrej1, barcosnombre[barco-1]);
                                    contadordebarcos++;
                                    printf("llevas %d barcos derrumbados\n", contadordebarcos);
                                    tablero [fila][columna] = 2;
                                }
                                else if (tablero [fila][columna] == 0){
                                    tablero [fila][columna] = 3;
                                    printf("disparo fallido.\n");
                                    printf("llevas %d barcos derrumbados\n", contadordebarcos);
                                    turno = 2;

                                }
                                else{
                                    printf("ya habias disparado en estas coordenadas\n");

                                }
                                for(i=0;i<5;i++){
                                    for(j=0;j<5;j++){
                                        if (tablero[i][j] == 1){
                                            printf("(0)");
                                        }
                                        else{
                                            printf("(%d)", tablero[i][j]);
                                        }
                                    }
                                    printf("\n");
                                }
                    }while(tablero [fila][columna] == 1);
                        if(contadordebarcos == 3){
                            printf("acabaste el juego, felicidades %s.", nombrej1);
                            return 0;
                        }
                    }
                    if (turno == 2){
                        printf("\n'Turno de %s'\n" ,nombrej2);
                            // Pedir disparo
                            do{
                            printf("Fila: ");
                            scanf("%d", &filaj2);

                            printf("Columna: ");
                            scanf("%d", &columnaj2);
                            filaj2--;
                            columnaj2--;
                                if(filaj2 < 0 || filaj2 > 4 || columnaj2 < 0 || columnaj2 > 4){
                                    printf("Las coordenadas no estan dentro del tablero.\n");
                                }

                                else if (tableroj2 [filaj2][columnaj2] >= 1 && tablero [fila][columna] <= 3){
                                    int barco = tableroj2 [filaj2][columnaj2];
                                    printf("%s le haz dado al barco %s\n", nombrej2, barcosnombre[barco+2]);
                                    contadordebarcosj2++;
                                    printf("llevas %d barcos derrumbados\n", contadordebarcosj2);
                                    tableroj2 [filaj2][columnaj2] = 2;
                                }
                                else if (tableroj2 [filaj2][columnaj2] == 0){
                                    tableroj2 [filaj2][columnaj2] = 3;
                                    printf("disparo fallido.\n");
                                    printf("llevas %d barcos derrumbados\n", contadordebarcosj2);
                                    turno = 1;

                                }
                                else{
                                printf("ya habias disparado en estas coordenadas\n");

                                }
                                 for(h=0;h<5;h++){
                                    for(o=0;o<5;o++){
                                        if (tableroj2[h][o] == 1){
                                            printf("(0)");
                                        }
                                        else{
                                            printf("(%d)", tableroj2[h][o]);
                                        }
                                    }
                                    printf("\n");
                                }
                            }while(tableroj2 [filaj2][columnaj2] == 1);
                                if(contadordebarcosj2 == 3){
                                    printf("acabaste el juego, felicidades %s.", nombrej2);
                                    return 0;
                                }
                            }
                    }
}



