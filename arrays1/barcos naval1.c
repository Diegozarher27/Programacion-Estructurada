#include<stdio.h>

int main(){
    int n = 3;
    int m = 3;
    int j;
    int i;
    int h;
    int o;
    int jugador1 [n][m];
    int jugador2 [n][m];
    int bote1 = 777;
    int bote2 [2]={555,555};
    for (m=0; m <= 2  ; m++){
        for (n=0; n<=2; n++){
            jugador1 [n][m] = 0;
    printf("(%d)", jugador1 [n][m]);

        }
        printf("\n");
    }
    int a, b, c, d, e, f;
    do{
    printf("ingresa la coordenada del bote 1 (jugador 1).\n");
    printf("las coordenadas estan en este orden (primera coordenada que metas son las filas y las segundas son las columnas).\n");
    scanf("%d" "%d", &a, &b);
    if (a>3 || b>3 ||a==0||b==0||a<0||b<0){
        printf("coordenada invalida vuelvela a ingresar.\n");
    }
    }while (a>3 || b>3 ||a==0||b==0||a<0||b<0);
        a=a-1;
        b=b-1;
        jugador1 [a][b]= bote1;
    for (i=0; i < 3; i++){
        for (j=0; j<3; j++){
    printf("(%d)", jugador1 [i][j]);

        }
        printf("\n");
        }
    do{
    printf("ingresa la primera coordenada del bote 2 (jugador 1)\n");
    printf("las coordenadas estan en este orden (primera coordenada que metas son las filas y las segundas son las columnas).\n");
    scanf("%d" "%d", &c, &d);
    if (c>3 || d>3 ||c==0||d==0||c<0||d<0){
        printf("coordenada invalida vuelvela a ingresar.\n");
    }
    }while (c>3 || d>3 ||c==0||d==0||c<0||d<0);
        c= c-1;
        d= d-1;
        jugador1 [c][d]= bote2 [0];
    for (i=0; i < 3; i++){
        for (j=0; j<3; j++){
    printf("(%d)", jugador1 [i][j]);
        }
    printf("\n");

        }
    do{
    printf("ingresa la segunda coordenada del bote 2 (jugador 1)\n");
    printf("las coordenadas estan en este orden (primera coordenada que metas son las filas y las segundas son las columnas).\n");
        scanf("%d" "%d", &e, &f);
        if(e>3 || f>3 ||e==0||f==0||e<0||f<0){
            printf("coordenada incorrecta, vuelvela a ingresar.\n");
        }
    }while (e>3 || f>3 ||e==0||f==0||e<0||f<0);
        e = e-1;
        f = f-1;
        jugador1 [e][f]= bote2 [1];
    for (h=0; h< 3; h++){
        for (o=0; o<3; o++){
                    printf("(%d)", jugador1 [h][o]);
                }
                printf("\n");

                }
    }
