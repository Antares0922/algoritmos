import string

def codificador(palabra:str,abecedario:list):
    codificada = ""
    #recorre la letra de tu palabra
    for letra in palabra:
        #recorre cada letra del abc
        for i in abecedario:
            #compara
            if letra == i:
                indice = abecedario.index(i)
                #recorre 3 espacios mas
                codificada+=(abecedario[indice+3])
                break
            elif letra == ' ':
                codificada+=' '
                break
    return codificada

def descodificar(palabra:str,abecedario:list):
    descodificada = ""
    #recorre la letra de tu palabra
    for letra in palabra:
        #recorre cada letra del abc
        for i in abecedario:
            #compara
            if letra == i:
                indice = abecedario.index(i)
                #recorre 3 espacios menos
                descodificada+=(abecedario[indice-3])
                break
            elif letra == ' ':
                descodificada+=' '
                break
    return descodificada
    
#creando el abecedario 
abecedario = list(string.ascii_lowercase)
#evitar errores de index
abecedario.extend(['a','b','c'])
print(len(abecedario))

palabra = input("escribe una palabra:")

codificada = codificador(palabra,abecedario)

print(f"tu palabra codificada es:{codificada}")
print(f"tu palabra descodificada es:{descodificar(codificada,abecedario)}")
