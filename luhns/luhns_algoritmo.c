#include <stdio.h>
#include <math.h>
#include <stdbool.h>

unsigned int longitud(long long int numero);
int algoritmo(long long int tarjeta);

int main()
{
    long long int tarjeta;
    //pidiendo el numero de la tarjeta
    printf("escribe los digitos de tu tarjeta:");
    scanf("%lld",&tarjeta);
    //sacando longitud
    unsigned int longi = longitud(tarjeta); 
    printf("la longitud de tu tarjeta es %u\n",longi);
    int prueba = algoritmo(tarjeta);
    printf("la prueba lanzo el resultado de:%i\n",prueba);
    return 0;
}


 unsigned int longitud(long long int numero)
{
    int longitud_num = 0;
    if (numero == 0)
    {
        return 1;
    }
    else
    {
        while (numero != 0)
        {
            numero/=10;
            longitud_num++;
        }
    }
    return longitud_num;
}

int algoritmo(long long int tarjeta)
{
    unsigned int numero,digito_derecha = 0;
    unsigned int longitud_num = longitud(tarjeta);
    bool sumar_o_multiplicar = true;
    unsigned int ciclos = 0;
    while (ciclos < longitud_num)
    {
        if (sumar_o_multiplicar == true)
        {
            //obtiene el numero de la derecha
            digito_derecha = tarjeta % 10;
            //suma el digito al numero final
            numero+=floor(digito_derecha);
            //quita el digito de la derecha
            tarjeta /= 10;
            tarjeta = floor(tarjeta);
            sumar_o_multiplicar = false;
            ciclos++;
        }
        else
        {
            //obtiene el numero de la derecha
            digito_derecha = tarjeta % 10;
            //multiplica el numero x 2
            digito_derecha *=2;
            //suma los digitos
            if (digito_derecha > 9)
            {
                //posible error
                int digito_derecha_multi = digito_derecha % 10;
                digito_derecha /= 10;
                //suma de los dos digitos
                digito_derecha += floor(digito_derecha_multi);
                ciclos++;
                //suma al digito final
                numero+=floor(digito_derecha);
                //quita el ultimo digito
                tarjeta/=10;
                tarjeta = floor(tarjeta);
                sumar_o_multiplicar = true;
            }
            else
            {
                numero+=floor(digito_derecha);
                tarjeta/=10;
                tarjeta = floor(tarjeta);
                sumar_o_multiplicar = true;
                ciclos++;
            }
        }
    }
    return numero;
}