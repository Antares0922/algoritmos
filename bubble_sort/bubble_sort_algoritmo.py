def algoritmo(lista_desordenada:list):
    ciclos = len(lista_desordenada) -1
    while ciclos > 0:
        for indice in range(ciclos):
            if lista_desordenada[indice] > lista_desordenada[indice + 1]:
                numero_original = lista_desordenada[indice]
                numero_derecha = lista_desordenada[indice + 1]
                #cambio de lugares
                lista_desordenada[indice] = numero_derecha
                lista_desordenada[indice + 1 ] = numero_original
        else:
            ciclos -= 1
    return lista_desordenada

        
print(algoritmo([99,-10,90,5,0,21,100,-100,93,8]))