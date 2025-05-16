#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cifrado(int longitud,char *pPalabra);
void descifrado(int longitud,char *pPalabra);

int main()
{
    //array
    char *pPalabra;
    int longitud = 0;
    char temp;
    //rellenando array
    printf("Escribe una oracion:\n");

    //necesita leer que ya termino con ctrl + z
    while ((temp = getchar()) != '\n')
    {
        // Aumentar el tamaño en 1 por cada caracter
        pPalabra = realloc(pPalabra, longitud + 1); 
        pPalabra[longitud] = temp;
        longitud++;
    }
    //aunmentando el tamaño para el caracter final '\0'
    pPalabra = realloc(pPalabra, longitud + 1);
    pPalabra[longitud] = '\0';
    //cifrado y desifrado
    printf("tu palabra original es: %s\n",pPalabra);
    cifrado(longitud,pPalabra);
    printf("tu palabra cifrada es: %s\n",pPalabra);
    descifrado(longitud,pPalabra);
    printf("tu palabra descifrada es: %s\n",pPalabra);
    //liberando memoria
    free(pPalabra);
    return 0;
}

void cifrado(int longitud,char *pPalabra)
{
    char abc[29] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c'};
    //recorre cada letra de tu palabra
    for (int indice = 0; indice<longitud;indice++)
    {
        char letra = pPalabra[indice];
        //recorre el abc
        for(int i = 0; i<=26;i++)
        {
            if (letra == abc[i])
            {
                pPalabra[indice] = abc[i+3];
                break;
            }
            else
            {
                pPalabra[indice] = ' ';
            }
        }
    }
}

void descifrado(int longitud,char *pPalabra)
{
    char abc[29] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c'};
    //recorre cada letra de tu palabra
    for (int indice = 0; indice<longitud;indice++)
    {
        char letra = pPalabra[indice];
        //recorre el abc
        for(int i = 0; i<=26;i++)
        {
            if (letra == abc[i])
            {
                pPalabra[indice] = abc[i-3];
                break;
            }
            else
            {
                pPalabra[indice] = ' ';
            }
        }
    }
}
