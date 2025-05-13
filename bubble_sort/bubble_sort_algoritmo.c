#include <stdio.h>

void algoritmo(int lista_desordenada[], int longitud_array,int *pLista);

int main() 
{
    int lista[10] = {99,-10,90,5,0,21,100,-100,93,8};
    int longitud = sizeof(lista)/sizeof(lista[0]);
    int *pLista = lista;
    algoritmo(lista,longitud,pLista);
    for (int i = 0; i<10;i++)
    {
        printf("%i ",lista[i]);
    }
    return 0;
}

void algoritmo(int lista_desordenada[],int longitud_array,int *pLista)
{
    int numero=0,numero_derecha=0;
    //sacando la longitud del array y restando 1
    int ciclos = longitud_array - 1;
    while (ciclos > 0)
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
    //modificando lista
    for (int i=0; i < longitud_array; i++)
    {
        *(pLista + i) = lista_desordenada[i];
    }
}

