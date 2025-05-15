#include <stdio.h>

void algoritmo(int lista[],int longitud);

int main()
{
    int lista[] = {9,0,10,8,1,3,12,-10,8,5,7};
    int longitud = sizeof(lista) / sizeof(lista[0]);
    algoritmo(lista,longitud);
    for (int i =0; i<longitud;i++)
    {
        printf("%i\n",lista[i]);
    }
    return 0;
}

void algoritmo(int lista[],int longitud)
{
    //numero de indice de inicio y ciclos
    int indice = 0;
    while (indice<longitud)
    {
        //comparaciones
        for (int indice_max = 1 + indice; indice_max<longitud;indice_max++)
        {
            if (lista[indice] > lista[indice_max])
            {
                //cambiando de lugar
                int num_mayor = lista[indice];
                *(lista+indice) = lista[indice_max];
                *(lista+indice_max) = num_mayor;
            }
        }
        indice ++;
    }
}