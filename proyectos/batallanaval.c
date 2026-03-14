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
    int bote1 = 777;
    int bote2 [2]={555,555};
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
    do{
    printf("Ingresa la segunda coordenada del bote 2 (jugador 1)\n");
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
        for(i=0;i<=4;i++){
            for(j=0;j<=4;j++){
                printf("(%d)",jugador1[i][j]);
            }
            printf("\n");
        }
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
        printf("ingresa la coordenada del bote 1 (jugador 2)");
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
        printf("ingresa la  primera coordenada del bote 2 (jugador 2)");
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
        printf("ingresa la segunda coordenada del bote 2 (jugador 2)");
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
       jugador2 [w][x] = bote2 [1];
       for(h=0;h<=4;h++){
        for(o=0;o<=4;o++){
            printf("(%d)",jugador2[h][o]);
        }
        printf("\n");
       }

}
