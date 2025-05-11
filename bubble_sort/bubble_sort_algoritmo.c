#include <stdio.h>

void algoritmo(int lista_desordenada[], int longitud_array);

int main() 
{
    int lista[10];
    for (int indice = 0; indice<10;indice++)
    {
        int valor;
        printf("escribe un numero:\n");
        scanf("%i",&valor);
        lista[indice] = valor;
    }
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
        for (int indice = 0; indice<ciclos;indice++ )
        {
            if (lista_desordenada[indice] > lista_desordenada[indice+1])
            {
                //obteniendo los valores
                numero = lista_desordenada[indice];
                numero_derecha = lista_desordenada[indice+1];
                //cambiando posicion
                lista_desordenada[indice] = numero_derecha;
                lista_desordenada[indice+1] = numero;
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

