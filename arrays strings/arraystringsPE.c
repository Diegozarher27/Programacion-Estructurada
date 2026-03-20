
Participacion - string
JORGE ERNESTO LOPEZ ARCE DELGADO
•
13 mar (Última modificación: 13 mar)
100 puntos
Fecha de entrega: 13 mar, 23:55
Subir a su Github un archivo de codigo fuente donde tenga todos los ejemplos eplicados en el pdf.

subir codigo y capturas de funcionamiento final.
string.pdf
PDF

Comentarios de la clase
Tu trabajo
Entregado
CPESTRING.c
C

Screenshot 2026-03-13 223415.png
Imagen

No se pueden entregar trabajos después de la fecha de entrega
Comentarios privados
Añade un comentario privado…

Solo tus profesores y tú podéis ver los comentarios privados
#include <stdio.h>
#include <string.h>

int main(){

    char alumno [50] = "ANTONIO";
    char alumno2 [50];
    char lista [4][50];
    char apellido[50] = "perez";
    int i;

    printf("%s", alumno);
    printf("\n");

    printf("Dame tu nombre alumno \n");

    // EJEMPLO CON SCANF (solo lee una palabra)
    scanf("%s", alumno2);
    printf("Tu nombre con scanf es: %s\n", alumno2);

    getchar(); // limpiar buffer para poder usar fgets

    // EJEMPLO CON FGETS (permite espacios)
    printf("Ahora escribe tu nombre completo:\n");
    fgets(alumno2,sizeof(alumno2),stdin);
    printf("Tu nombre con fgets es: %s\n",alumno2);

    printf("////EQUIPO CHIVAS////\n");

    // EJEMPLO CON STRCPY
    strcpy(lista[0], "Angel");
    strcpy(lista[1], "Diego");
    strcpy(lista[2], "Carlos");
    strcpy(lista[3], "Jorge");

    printf("Lista original:\n");
    for (i=0;i<4;i++){
        printf("%s\n",lista[i]);
    }

    printf("\nAhora puedes cambiar los nombres del equipo\n");

    // LECTURA CON FGETS
    for (i=0;i<4;i++){
        printf("Jugador %d: ", i+1);
        fgets(lista[i],sizeof(lista[i]),stdin);
        if(lista[i][strlen(lista[i]) - 1] == '\n'){
    lista[i][strlen(lista[i]) - 1] = '\0';
    }
    }

    printf("\nLista final del equipo:\n");

    for(i=0;i<4;i++){
        printf("%s\n",lista[i]);
    }

    printf("\n");

    // EJEMPLO DE STRLEN
    printf("Numero de caracteres del jugador 1: %d\n",strlen(lista[0]));
    printf("Numero de caracteres del jugador 2: %d\n",strlen(lista[1]));
    printf("Numero de caracteres del jugador 3: %d\n",strlen(lista[2]));
    printf("Numero de caracteres del jugador 4: %d\n",strlen(lista[3]));

    // EJEMPLO DE STRCAT
    printf("\nEjemplo de concatenacion\n");
    strcat(alumno, apellido);
    printf("Nombre concatenado: %s\n", alumno);

    // EJEMPLO DE STRCMP
    printf("\nComparacion de nombres\n");

    if(strcmp(lista[0], lista[1]) == 0){
        printf("El jugador 1 y jugador 2 tienen el mismo nombre\n");
    }else{
        printf("Los nombres del jugador 1 y jugador 2 son diferentes\n");
    }

    return 0;
}
