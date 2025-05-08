def algoritmo(lista_desordenada:list):
    ciclos = len(lista_desordenada) -1
    while ciclos > 1:
        for i in lista_desordenada[0:ciclos]:
            #saca el index de i para compararlo
            indice_i = lista_desordenada.index(i)
            if i > lista_desordenada[indice_i + 1]:
                numero_derecha = lista_desordenada[indice_i + 1]
                #cambio de lugares
                lista_desordenada[indice_i] = numero_derecha
                lista_desordenada[indice_i + 1 ] = i
        else:
            ciclos -= 1
    return lista_desordenada

        
print(algoritmo([4,1,7,8,6]))