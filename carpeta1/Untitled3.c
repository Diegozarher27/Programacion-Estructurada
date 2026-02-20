#include <stdio.h>


int main()
{
   int opcion;
   int NM;
   int i;
   unsigned calificacion ;
   int suma ;
   int promedio;
   do{
    printf("dame la cantidad de materias que cursaste en el semestre:\n");
    scanf("%d", &NM);
    for (i = 1, calificacion = 0, suma = 0; i <= NM ; i++){
        printf("calificacion de la materia:(0 - 100)\n");
        scanf("%d", &calificacion);
        while (calificacion > 100 || calificacion < 0){
            printf("eh we no se puede poner numeros mayores a 100 o negativos\n");
            return -1;
        }
        suma += calificacion ;
        }

    printf("tu suma es: %d\n", suma);
    promedio = suma /NM;
    printf("tu promedio es: %d\n", promedio);
    printf("PRESIONA 1 SI..quieres repetir el programa\n");
    printf("PRESIONA 2 SI...quieres salir del programa\n");
    scanf("%d", &opcion);

   }while (opcion == 1);
}
