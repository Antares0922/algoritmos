#include <stdio.h>
#include <string.h>

void algoritmo(char palabra[100],int longitud);

int main()
{
    char palabra[100];
    printf("escribe una palabra:");
    //obtiene todo del teclado
    fgets(palabra,sizeof(palabra),stdin);
    //quitando el enter
    palabra[strcspn(palabra,"\n")] = '\0';
    //longitud de la cadena
    int longitud = (int)strlen(palabra);
    printf("la longitud de tu palabra es de %i\n",longitud);
    algoritmo(palabra,longitud);
    return 0;
}

void algoritmo(char palabra[100],int longitud)
{
    char codificada[100];
    char abc[29] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c'};
    //recorre cada letra de tu palabra
    for (int indice = 0; indice<longitud;indice++)
    {
        char letra = palabra[indice];
        //recorre el abc
        for(int i = 0; i<=26;i++)
        {
            if (letra == abc[i])
            {
                codificada[indice] = abc[i+3];
                break;
            }
            else
            {
                codificada[indice] = ' ';
            }
        }
    }
    //añadir \0
    codificada[longitud] = '\0';
    printf("la palabra es %s",codificada);
}