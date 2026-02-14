#include <stdio.h>

int ACua (){
    int a;
    printf("dame el lado de tu cuadrado:\n");
    scanf("%d", &a);
    int respuesta;
    printf("que deseas sacar area (1) o perimetro (2)?\n");
    scanf("%d", &respuesta);
        if (respuesta == 1){
            return a * a;
        }
        else if (respuesta == 2){
            return a * 4;
        }
        else{
            return -1;
        }
}
int Arec(){
    int b, c;
    printf("dame la base de tu rectangulo\n");
    scanf("%d", &b);
    printf("dame la altura de tu rectangulo\n");
    scanf("%d", &c);
    int resrec;
    printf("que deseas sacar area (1) o perimetro (2)?\n");
    scanf("%d", &resrec);
    if (resrec == 1){
            return b * c;
        }
        else if (resrec == 2){
            return 2*b+2*c;
        }
        else{
            return -1;
        }

}
int Atri(){
    int d, e, f, g, h;
    int restri;
    printf("que deseas sacar area (1) o perimetro (2)?\n");
    scanf("%d", &restri);

    if (restri == 1){
        printf("dame la base de tu triangulo\n");
        scanf("%d", &d);
        printf("dame la altura de tu triangulo\n");
        scanf("%d", &e);
            return (d * e)/2;
        }
        else if (restri == 2){
            printf("dame los lados de los triangulos\n");
            printf("lado 1:");
            scanf("%d", &f);
            printf("lado 2:");
            scanf("%d", &g);
            printf("lado 3:");
            scanf("%d", &h);

            return f + g + h;
        }
        else{
            return -1;
        }

}
float Acir(){
    float i,j,pi=3.1416;
    int rescir;
    printf("que deseas sacar area (1) o perimetro (2)?\n");
    scanf("%d", &rescir);
    if (rescir==1){
        printf("dame el radio de tu circulo:\n");
        scanf("%f",&i);
        return (i * i) * pi;
    }
    else if (rescir==2){
        printf("dame el diametro del circulo\n");
        scanf("%f",&j);
        return j * pi;
    }
    else{
        return -1;
    }
}

int main(){

    int opcion;
    float resultado;
    int answer;
    int repetir = 1;
    do{
    printf("0. Repetir programa\n");
    printf("1. Cuadrado\n");
    printf("2. rectangulo\n");
    printf("3. triangulo\n");
    printf("4. circulo\n");
    printf("Elige cual es tu figura: (coloca el numero que representa la figura)\n");
    scanf("%d", &opcion);

    switch (opcion){
        case 1:
            answer = ACua();
            if(answer != -1)
                printf("El resultado de tu operacion deseada es: %d\n", answer);
            else
                printf("Opcion invalida dentro de la funcion.\n");
            break;
        case 2:
            answer = Arec();
            if(answer != -1)
                printf("El resultado de tu operacion deseada es: %d\n", answer);
            else
                printf("Opcion invalida dentro de la funcion.\n");
            break;
        case 3:
            answer = Atri();
            if(answer != -1)
                printf("El resultado de tu operacion deseada es: %d\n", answer);
            else
                printf("Opcion invalida dentro de la funcion.\n");
            break;
        case 4:
            resultado = Acir();
            if (resultado != -1)
                printf("el resultado de tu operacion deseada es: %.4f\n", resultado);
            else
                printf("Opcion invalida dentro de la funcion.\n");
            break;
        case 0:
            printf("repitiendo el programa...\n");
            break;
        default:
            printf("tu opcion fue invalida.\n");
            break;

        }
        if (opcion != 0 ){
            printf("quieres repetir el programa? (0 = repetir, otro numero = salir): ");
            scanf("%d", &repetir);
        }
        if(repetir == 0) {
                opcion = -1;
            } else {
                opcion = 0;
            }


    }while (opcion != 0);
    return 0;
}
