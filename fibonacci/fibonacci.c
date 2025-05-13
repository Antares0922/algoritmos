#include <stdio.h>

void fibonacci(int numeros[],int longitud);

int main()
{
    int lista[] = {1,2,3,4,5,6,7,8,9,10};
    int longitud = sizeof(lista) / sizeof(lista[0]);
    fibonacci(lista,longitud);
    for (int i = 0; i<longitud;i++)
    {
        printf("numero %i = %i ",i,lista[i]);
    }
    return 0;
}

void fibonacci(int numeros[],int longitud)
{
    int serie_fibonacci[longitud];
    serie_fibonacci[0] = numeros[0];
    //sacando la suma
    for (int i = 1; i<longitud; i++)
    {
        serie_fibonacci[i] = serie_fibonacci[i-1] + numeros[i];
    }
    //modificando la lista
    for (int x = 0;x<longitud;x++)
    {
        *(numeros + x) = serie_fibonacci[x];
    }
}