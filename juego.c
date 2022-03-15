//JuegoGrupo11:
//Participantes:
//José De la Barra
//Pedro Fajardo
//Matías Fernández
//Paola Flores

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

void start();
void hyphen();
void ask();

int main() {
    start();
    return 0;
}

void start() {
    int i;
    int life = 5;

    srand(time(NULL));  //* para que rand funcione bien *//
    char array[][28] = {"leon", "tigre", "perro", "mammut", "gato", "puma"};
    i = rand() % 6;
    char* word = array[i];
    int longitud = strlen(word);

    hyphen(&longitud, word, &life);  //entregamos dirección en memoria
}

void hyphen(int* longitud, char* word, int* life) {  //pasamos la dirección en memoria de longitud

    int i = *longitud;  //recuperamos la variable que está en la dirección de memoria de longitud
    int j;
    char guion2[i];
    for (j = 0; j < i; j++) {
        char guion[1] = {"_"};
        strcat(guion2, guion);
    }

    printf("%s\n", guion2);
    ask(&guion2, word, longitud, life);
}

void ask(char* hyphen, char* word, int* longitud, int* life) {  // entregamos dirección de los guiones y de la palabra
    char letter;

    if (life > 0) {
        printf("Te quedan %d", *life);
        printf(" intentos\n");

        printf("Ingresa una letra: \n");
        scanf("%c", &letter);
    }

}
