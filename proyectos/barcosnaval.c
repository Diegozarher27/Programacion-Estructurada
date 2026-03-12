#include<stdio.h>

int main(){
    int n = 5;
    int m = 5;
    int j,i,h,o;
    int jugador1 [n][m];
    int jugador2 [n][m];
    int bote1 = 777;
    int bote2 [2]={555,555};
    for (m=0; m <= 4  ; m++){
        for (n=0; n<=4; n++){
            jugador1 [n][m] = 0;
        printf("(%d)", jugador1 [n][m]);
        }
        printf("\n");
    }
    int a, b, c, d, e, f;
    do{
    printf("Ingresa la coordenada del bote 1 (jugador 1).\n");
    printf("\n");
    printf("Las coordenadas estan en este orden (primera coordenada que metas son las filas y las segundas son las columnas).\n");
    scanf("%d" "%d", &a, &b);
    if (a>5 || b>5 ||a==0||b==0||a<0||b<0){
        printf("Coordenada invalida vuelvela a ingresar.\n");
        printf("\n");

    }
    }while (a>5 || b>5 ||a==0||b==0||a<0||b<0);
        a=a-1;
        b=b-1;
        jugador1 [a][b]= bote1;
    for (i=0; i < 5; i++){
        for (j=0; j<5; j++){
    printf("(%d)", jugador1 [i][j]);

        }
        printf("\n");
        }
    do{
    printf("Ingresa la primera coordenada del bote 2 (jugador 1)\n");
    printf("\n");
    printf("Las coordenadas estan en este orden (primera coordenada que metas son las filas y las segundas son las columnas).\n");
    scanf("%d" "%d", &c, &d);
    if (c>5 || d>5 ||c==0||d==0||c<0||d<0){
        printf("coordenada invalida vuelvela a ingresar.\n");
        printf("\n");

    }
    }while (c>5 || d>5 ||c==0||d==0||c<0||d<0);
        c= c-1;
        d= d-1;
        jugador1 [c][d]= bote2 [0];
    for (i=0; i < 5; i++){
        for (j=0; j<5; j++){
    printf("(%d)", jugador1 [i][j]);
        }
    printf("\n");

        }
    do{
    printf("Ingresa la segunda coordenada del bote 2 (jugador 1)\n");
    printf("\n");
    printf("Las coordenadas estan en este orden (primera coordenada que metas son las filas y las segundas son las columnas).\n");
        scanf("%d" "%d", &e, &f);
        if(e>5 || f>5 ||e==0||f==0||e<0||f<0){
            printf("Coordenada incorrecta, vuelvela a ingresar.\n");
            printf("\n");

        }
    }while (e>5 || f>5 ||e==0||f==0||e<0||f<0 );
        e = e-1;
        f = f-1;
        jugador1 [e][f]= bote2 [1];
    for (h=0; h<5; h++){
        for (o=0; o<5; o++){
                    printf("(%d)", jugador1 [h][o]);
                }
                printf("\n");

                }
    }
