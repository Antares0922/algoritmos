#include <stdio.h>

void algoritmo(int lista_desordenada[], int longitud_array);

int main() 
{
    int lista[] = {4,1,9,8,6};
    int longitud = sizeof(lista)/sizeof(lista[0]);
    algoritmo(lista,longitud);
    return 0;
}

void algoritmo(int lista_desordenada[],int longitud_array)
{
    int numero=0,numero_derecha=0;
    //sacando la longitud del array y restando 1
    int ciclos = longitud_array - 1;
    while (ciclos > 1)
    {
        for (int x = 0; x<ciclos;x++ )
        {
            if (lista_desordenada[x] > lista_desordenada[x+1])
            {
                //obteniendo los valores
                numero = lista_desordenada[x];
                numero_derecha = lista_desordenada[x+1];
                //cambiando posicion
                lista_desordenada[x] = numero_derecha;
                lista_desordenada[x+1] = numero;
            }
        }
        ciclos--;
    }
    //iterando la lista
    for (int i=0; i < longitud_array; i++)
    {
        printf("%d,\n",lista_desordenada[i]);
    }
}

