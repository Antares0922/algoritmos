#include <stdio.h>

void algoritmo(int lista_desordenada[], int longitud_array);
int index (int array[],int valor,int longitud);

int main() 
{
    int lista[] = {4,1,7,8,6};
    int longitud = sizeof(lista)/sizeof(lista[0]);
    algoritmo(lista,longitud);
    return 0;
}

void algoritmo(int lista_desordenada[],int longitud_array)
{
    int numero=0,numero_derecha=0,indice;
    //sacando la longitud del array y restando 1
    int ciclos = longitud_array;
    while (ciclos > 1)
    {
        for (int x = 0; ciclos > x;)
        {
            if (lista_desordenada[x]>lista_desordenada[x+1])
            {
                //sacando index
                indice = index(lista_desordenada,lista_desordenada[x],longitud_array);
                //obteniendo los valores
                numero = lista_desordenada[indice];
                numero_derecha = lista_desordenada[indice+1];
                //cambiando posicion
                lista_desordenada[indice] = numero_derecha;
                lista_desordenada[indice+1] = numero;
            }
        ciclos--;
        }
    }
    //iterando la lista
    for (int i=0; i < longitud_array; i++)
    {
        printf("%d,\n",lista_desordenada[i]);
    }
}

int index (int array[],int valor,int longitud)
{
    for (int i = 0; i<longitud; i++)
    {
        if (array[i] == valor)
        {
            return i;
        }
    }
}