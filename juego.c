//JuegoGrupo11: 
//Participantes:
//José De la Barra
//Pedro Fajardo  
//Matías Fernández
//Paola Flores

#include <stdlib.h>
#include <time.h>
#include <string.h>

void start();

int main() {
    start();
    return 0;
}

void start() {
    int i;

    srand(time(NULL));  //* para que rand funcione bien *//
    char array[][28] = {"leon", "tigre", "perro", "mammut", "gato", "puma"};
    i = rand() % 6;
    char* word = array[i];
    int longitud = strlen(word);
}
