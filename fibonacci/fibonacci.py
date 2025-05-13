def algoritmo(numeros:list):
    #primer numero de la serie
    serie_fibonacci = [numeros[0]]
    for i in range(1,len(lista)):
        numero_izquierda = serie_fibonacci[i-1]
        #suma del numero del producto de la serie y el num de la lista original
        serie_fibonacci.append(numero_izquierda+numeros[i])
    return serie_fibonacci
    
lista = [1,2,3,4,5,6,7,8,9,10]

print(algoritmo(lista))

