def algoritmo(lista:list):
    #indice minimo y ciclos
    for indice in range(0,len(lista)):
        #comparaciones
        for indice_max in range(indice+1,len(lista)):
            if lista[indice] > lista[indice_max]:
                num_mayor = lista[indice]
                lista[indice] = lista[indice_max]
                lista[indice_max] = num_mayor
    return lista
    
lista = [0,11,9,-2,7,6,4,5,20,0]

print(algoritmo(lista))

#cambia la lista hasta que encontro un numero mas pequeño que el de el indice minimo