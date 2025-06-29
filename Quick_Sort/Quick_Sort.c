#include <stdio.h>

void Quick_Sort(int*numeros,int inicio,int final);
int Pivote(int*numeros,int inicio,int final);


int main(){
    int numeros[] = {0,7,16,2,6,25,1,7,11,87};
    //la longitud de la lista es de 10 elementos
    int indice_menor = 0, indice_mayor = 9;

    Quick_Sort(numeros,indice_menor,indice_mayor);

    for(int i = 0; i<10; i++){
        printf("%i ",numeros[i]);
    }
    printf("\n");

    return 0;
}

void Quick_Sort(int*numeros,int inicio,int final){
    if(final<=inicio){return;}

    int pivote = Pivote(numeros,inicio,final);

    //PARTICION IZQUIERDA
    Quick_Sort(numeros,inicio,pivote-1);
    //PARTICION DERECHA
    Quick_Sort(numeros,pivote+1,final);
}

int Pivote(int*numeros,int inicio,int final){

    int pivote = numeros[final];

    //equivale a la posicion de
    int i = inicio-1;

    int temp;

    for(int j = inicio; j <= final - 1; j++){
        //CAMBIO DE LA IZQUIERDA
        if (numeros[j] < pivote){
            i++;
            temp = numeros[i];
            numeros[i] = numeros[j];
            numeros[j] = temp;
        }
    }
    //POSICION FINAL DEL PIVOTE
    i++;
    temp = numeros[i];
    numeros[i] = numeros[final];
    numeros[final] = temp;

    //retorna el nuevo pivote
    return i;
}
