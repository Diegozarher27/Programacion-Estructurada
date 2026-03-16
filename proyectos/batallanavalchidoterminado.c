#include<stdio.h>
#include<string.h>
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
    char nombrej1 [20];
    char nombrej2 [20];
    printf ("JUGADOR UNO ESCRIBE TU USERNAME. \n");
    fgets (nombrej1,sizeof(nombrej1),stdin);
    cambiar(nombrej1);
    printf ("JUGADOR DOS ESCRIBE TU USERNAME. \n");
    fgets (nombrej2,sizeof(nombrej2),stdin);
    cambiar(nombrej2);
    int n = 5;
    int m = 5;
    int j,i,h,o;
    int jugador1 [n][m];
    int bote1 = 2;
    int bote2 [2]={3,3};
    printf("\n'%s'\n" ,nombrej1);
    printf("TU TURNO DE COLOCAR TUS BARCOS, ESTE ES TU TABLERO DE JUEGO. \n");
    printf("\n");
    for (m=0; m <= 4  ; m++){
        for (n=0; n<=4; n++){
            jugador1 [n][m] = 0;
        printf("(%d)", jugador1 [n][m]);
        }
        printf("\n");
    }
    int a, b, c, d, e, f;
    do{
    printf("Ingresa la coordenada del bote 1 (ESTE BOTE ABARCA UN ESPACIO EN TU TABLERO)(jugador 1).\n");
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
    do{
    printf("Ingresa la primera coordenada del bote 2 (ESTE BARCO ABARCA 2 ESPACIOS EN TU TABLERO)(jugador 1)\n");
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
    do{
    printf("Ingresa la segunda coordenada del bote 2 (TIENES QUE COLOCARLO UN ESPACIO HACIA ARRIBA, ABAJO, DERECHA O IZQUIERA DE LA PRIMERA COORDENADA)(jugador 1)\n");
    printf("\n");
    printf("Las coordenadas estan en este orden (primera coordenada que metas son las filas y las segundas son las columnas).\n");
        scanf("%d" "%d", &e, &f);
        if(e>5 || f>5 ||e==0||f==0||e<0||f<0||!((c==e-1) && (d==f)||(c==e-1)&&(d==f-2)||(c==e)&&(d==f-1)||(c==e-2)&&(d==f-1))){
            printf("Coordenada incorrecta, vuelvela a ingresar.\n");
            printf("\n");

        }
    }while (e>5 || f>5 ||e==0||f==0||e<0||f<0 ||!((c==e-1) && (d==f)||(c==e-1)&&(d==f-2)||(c==e)&&(d==f-1)||(c==e-2)&&(d==f-1)));
        e = e-1;
        f = f-1;
        jugador1 [e][f]= bote2 [1];
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    int g,l, k,q,w,x;

    int jugador2 [5][5];
    int akary;
    int dani;
    printf("\n%s\n", nombrej2);
    printf(" TU TURNO DE COLOCAR TUS BARCOS, ESTE ES TU TABLERO DE JUEGO\n");
    printf("\n\n");
    for (akary=0; akary <= 4  ; akary++){
        for (dani=0; dani<=4; dani++){
            jugador2 [dani][akary] = 0;
        printf("(%d)", jugador2 [dani][akary]);
        }
        printf("\n");
    }
    do{
        printf("ingresa la coordenada del bote 1 (ESTE BARCO ABARCA UN ESPACIO EN EL TABLERO)(jugador 2)");
        printf("\n");
        printf("Las coordenadas estan en este orden (primera coordenada que metas son las filas y las segundas son las columnas).\n");
        scanf("%d" "%d", &g, &l);
        if(g>5 || l>5 ||g==0||l==0||g<0||l<0){
            printf("Coordenada incorrecta, vuelvela a ingresar.\n");
            printf("\n");

        }
    }while (g>5 || l>5 ||g==0||l==0||g<0||l<0 );
       g = g-1;
       l = l - 1;
       jugador2 [g][l] = bote1;

         do{
        printf("ingresa la  primera coordenada del bote 2 (ESTE BARCO ABARCA 2 ESPACIOS EN TU TABLERO)(jugador 2)");
        printf("\n");
        printf("Las coordenadas estan en este orden (primera coordenada que metas son las filas y las segundas son las columnas).\n");
        scanf("%d" "%d", &k, &q);
        if(k>5 || q>5 ||k==0||q==0||k<0||q<0){
            printf("Coordenada incorrecta, vuelvela a ingresar.\n");
            printf("\n");

        }
    }while (k>5 || q>5 ||k==0||q==0||k<0||q<0 );
       k = k-1;
       q = q - 1;
       jugador2 [k][q] = bote2 [0];

    do{
        printf("ingresa la segunda coordenada del bote 2 (ESTE BARCO SOLO SE PUEDE COLOCAR O ARRIBA, ABAJO, DERECHA O IZQUIERDA DE LA PRIMERA COORDENADA DEL BARCO 2)(jugador 2)");
        printf("\n");
        printf("Las coordenadas estan en este orden (primera coordenada que metas son las filas y las segundas son las columnas).\n");
        scanf("%d" "%d", &w, &x);
        if(w>5 || x>5 || w== 0||x==0||w<0||x<0 || !((k==w-1) && (q==x)||(k==w-1)&&(q==x-2)||(k==w)&&(q==x-1)||(k==w-2)&&(q==x-1))){
            printf("Coordenada incorrecta, vuelvela a ingresar.\n");
            printf("\n");

        }
    }while (w>5 || x>5 ||w==0||x==0||w<0||x<0 || !((k==w-1) && (q==x)||(k==w-1)&&(q==x-2)||(k==w)&&(q==x-1)||(k==w-2)&&(q==x-1)));
       w = w-1;
       x = x - 1;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
       jugador2 [w][x] = bote2 [1];
        int turno = 1;
        int acierto;
        int botesbum = 0;
        int botesbum2 = 0;
        int coo1;
        int coo2;
        char BUMJ1 = 'X';
        char NOBUM1 = 'A';
        char jugador2ataque[5][5];
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
            jugador2ataque[i][j] = 0;
            }
        }
        while (botesbum < 3 && botesbum2 < 3) {
            if(turno == 1) {
                printf("\nTurno de %s\n", nombrej1);
       do{
        printf("%s coloca tus coordenadas de ataque:\n",nombrej1);
        scanf("%d""%d",&coo1,&coo2);
        coo1 = coo1-1;
        coo2 = coo2 -1;
        if (coo1==g && coo2==l|| coo1==k && coo2==q||coo1==w&&coo2==x){
                printf("LE DISTE CAWN\n");
                jugador2ataque[coo1][coo2] = BUMJ1;
                acierto = 1;
                botesbum = botesbum + 1;
        }
        else{
                printf("FALLASTE CAWN\n");
                jugador2ataque[coo1][coo2] = NOBUM1;
                acierto = 0;
            }
             for (i=0; i < 5; i++){
                for (j=0; j<5; j++){
                printf("(%c)",jugador2ataque[i][j]);
            }
            printf("\n");

            }
        if (botesbum == 3){
            printf("GANASTE EL JUEGO CAWN FELICIDADES.");
            return 0;
        }
        }while(acierto == 1);
            turno = 2;
            }

        int aciertoj2;
        int coo3;
        int coo4;
        char BUMJ2 = 'X';
        char NOBUM2 = 'A';
        char jugador1ataque[5][5];
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
            jugador1ataque[i][j] = 0;
            }
        }
        if (turno==2){
             printf("\nTurno de %s\n", nombrej2);
       do{
        printf("%s coloca tus coordenadas de ataque:\n",nombrej2);
        scanf("%d""%d",&coo3,&coo4);
        coo3 = coo3-1;
        coo4 = coo4 -1;
        if (coo3==a && coo4==b|| coo3==c && coo4==d||coo3==e&&coo4==f){
                printf("LE DISTE CAWN\n");
                jugador1ataque[coo3][coo4] = BUMJ2;
                aciertoj2 = 1;
                botesbum2 = botesbum2 + 1;
        }
        else{
                printf("FALLASTE CAWN\n");
                jugador1ataque[coo3][coo4] = NOBUM2;
                aciertoj2 = 0;
            }
             for (i=0; i < 5; i++){
                for (j=0; j<5; j++){
                printf("(%c)",jugador1ataque[i][j]);
            }
            printf("\n");

            }
        }while(aciertoj2 == 1);
        if (botesbum2 == 3){
            printf("GANASTE CAWN");
            return 0;
            }
        turno = 1;
        }
    }
}

