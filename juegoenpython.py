import sys
import random

def juego():
    nombres = ["leon", "gato","perro","tigre", "jirafa", "elefante", "hipopotamo" ]
    num = random.randint(0, len(nombres))
    palabra= list(nombres[num-1])
    list2= []
    for i in range(1,len(palabra)+1):
        list2.append("_")
    print(list2)
    cont=0
    while cont!=len(palabra):

        letra=input("Dame una letra: ")
        for i in range(0, len(palabra)):

            if letra==palabra[i]:
                list2[i]= letra
                cont=cont+1
            else:
                cont=cont
        print(list2)
    print("Felicidades!")
