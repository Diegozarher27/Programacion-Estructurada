#include <stdio.h>

int main()
{
    int x;
    int suma = 0;
    scanf("%d",&x);

    while (x != 0){
        suma += x;
        printf("%d\n", suma);
        scanf("%d", &x);
    }
}
