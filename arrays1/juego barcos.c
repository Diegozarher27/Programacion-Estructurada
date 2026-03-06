#include<stdio.h>

int main(){
    int n = 3;
    int m = 3;
    int jugador1 [n][m];
    int jugador2 [n][m];
    int bote1 = 777;
    int bote2 [2]={555,555};
    for (m=0; m < 3; m++){
        for (n=0; n<3; n++){
            jugador1 [n][m] = 0;
    printf("(%d)", jugador1 [n][m]);

        }
        printf("\n");
    }
    int a;
    int b;
    printf("ingresa la coordenada del bote 1 (jugador 1)\n");
    scanf("%d" "%d", &a, &b);
    n = a;
    m = b;
    for (m=0; m < 3; m++){
        for (n=0; n<3; n++){
            jugador1 [n][m] = bote1 ;
    printf("(%d)", jugador1 [n][m]);

        }
        printf("\n");
    }
}
