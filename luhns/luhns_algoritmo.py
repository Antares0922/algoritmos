import math 

#sacandando los digitos de un numero
def longitud_num(numero:int):
    if numero == 0:
        return 1
    longitud = math.floor(math.log10(numero)) + 1
    return longitud

def algoritmo_Luhn(tarjeta:int):
    numeros_doble = []
    numeros_restantes = []
    agregar = 2
    #sacando los numeros en la longitud de al tarjeta
    for i in range(0,longitud_num(tarjeta)):
        digito_derecha = tarjeta % 10
        #si el numero agregar es par
        if agregar % 2 == 0:
            numeros_restantes.append(int(digito_derecha))
            tarjeta //= 10
            agregar += 1
        #si el numero agregar es impar    
        elif agregar % 2 == 1:
            numeros_doble.append(int(digito_derecha))
            tarjeta //= 10
            agregar -= 1
    #Multiplicando los numeros por 2
    numeros_multipicados = []
    for i in numeros_doble:
        numeros_multipicados.append(i*2)
    #sacando solamente los digitos
    for i in numeros_multipicados:
        if i > 9:
            #sumando los digitos de mas de dos digitos
            digito_derecha = i % 10
            i //= 10
            i += digito_derecha
            numeros_restantes.append(int(i))
        else:
            numeros_restantes.append(i)
    numero_final = sum(numeros_restantes)
    return numero_final

print(algoritmo_Luhn(4012888888881881))
print(longitud_num(4012888888881881))