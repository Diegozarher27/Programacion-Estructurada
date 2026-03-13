#include <stdio.h>
#include <string.h>


int main(){
    char alumno [16] = "ANTONIO";
    char alumno2 [16];
    char lista [4][16];
    int i;
    printf("%s", alumno);
    printf("\n");
    printf("Dame tu nombre alumno \n");
    //scanf("%s", &alumno2);
    //printf("%s", alumno2); esto es para imprimir palabras sin espacios
    //fgets(alumno2,sizeof(alumno2),stdin);
    //printf("%s",alumno2);
    printf("////EQUIPO CHIVAS////\n");
    //strcpy(lista[0], "Angel");
    //strcpy(lista[1], "Diego");
    //strcpy(lista[2], "Carlos");
    //strcpy(lista[3], "Jorge");
    for (i=0;i<4;i++){
        fgets(lista[i],sizeof(lista[i]),stdin);
    }
    for(i=0;i<4;i++){
        printf("%s\n",lista[i]);
    }
    printf("\n");
    printf("el numero de caracteres que tiene tu nombre es : %d\n",strlen(lista[0]));
    printf("el numero de caracteres que tiene tu nombre es : %d\n",strlen(lista[1]));
    printf("el numero de caracteres que tiene tu nombre es : %d\n",strlen(lista[2]));
    printf("el numero de caracteres que tiene tu nombre es : %d\n",strlen(lista[3]));
}
