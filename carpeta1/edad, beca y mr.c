#include <stdio.h>


int main()
{
    float promedio;
    int edad;
    int mr;
    printf("Escribe tu edad:\n");
    scanf("%d",&edad);
    printf("Escribe tu promedio\n");
    scanf("%f",&promedio);
    printf("ahora la cantidad de materias que reprobaste\n");
    scanf("%d",&mr);
    if (edad < 18){
        printf("eres menor de edad no puedes obtener la beca\n");
    }
    else if(promedio >= 9 && mr == 0 && edad >= 18){
        printf("obtuviste la beca\n");
    }
    else if(promedio >= 9 && mr <= 2 && edad >= 18){
        printf("puedes reeinscribirte\n");
    }
    else{
        printf("estas en situacion critica\n");
    }
    return 0;


}
