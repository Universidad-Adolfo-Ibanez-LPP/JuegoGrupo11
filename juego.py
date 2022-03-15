import sys
import random

def juego():
    nombres = ["leon", "gato","perro","tigre", "jirafa", "elefante", "hipopotamo" ]
    num = random.randint(0, len(nombres))
    palabra1= nombres[num-1]
    palabra= list(nombres[num-1])
    list2= []
    for i in range(1,len(palabra)+1):
        list2.append("_")
    print(list2)
    cont=0

    while cont!=len(palabra):
        letra=input("Dame una letra: ")
        if letra==palabra1:  #en caso que adivine la palabra de una
            cont=len(palabra)
        else:

            for i in range(0, len(palabra)):

                if letra==palabra[i]:
                    list2[i]= letra
                    cont=cont+1
                else:
                    cont=cont
            print(list2)
    print("Felicidades!")

def restart():
  plus = str(input("Quieres repetir el juego? "))
  if plus == "si":
    print("Adivina la palabra")
    juego()
    restart()

  else:
    print("Que mal ;(")
