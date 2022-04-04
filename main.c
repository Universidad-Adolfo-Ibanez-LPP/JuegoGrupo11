#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include "libros.h"
#define MAXCHAR 1000
#define LENGHT 250


void searchBook(FILE *fp, char **);
void deleteRow(FILE *fp, FILE *fp2);  // va a agregar una columna con unos al final de cada fila para identificar que libros hemos borrado
void editBook(FILE *fp, FILE *fp2, char argv[]);
void addBook(FILE *fp, FILE *fp2, char **, char argv[], char argv2[]);

FILE * openingFile(char *filename){
    FILE *fp;
    fp = fopen(filename,"r+");  // r+ para leer y escribir en el archivo
    return fp;
}


int main(int argc, char *argv[] ) {
    char *first_row[9] = {"Titulo", "Autor", "Año", "Estante", "Sección", "Piso", "Edificio", "Sede", "\0"};
    char row[MAXCHAR];
    FILE *fp = openingFile(argv[1]);
    if (fp == NULL) {
        perror("Opening file");
        return -1;
    }

    FILE *fp2 = openingFile(argv[2]);
    if (fp2 == NULL) {
        perror("Opening file");
        return -1;
    }

    while (feof(fp) != true) {
        fgets(row, MAXCHAR, fp);
        fprintf(fp2, "%s", row);
    }


    int option;
    do
    {
        printf( "\n   1. Agregar libros\n");
        printf( "   2. Quitar libros\n");
        printf( "   3. Editar libros\n");  // cambiar sede, sección o piso
        printf( "   4. Buscar\n");
        printf( "   5. Salir.\n" );
        printf( "   Introduzca opción (1-5): \n");

        scanf("%d", &option);
        if (option == 1) {
            addBook(fp, fp2, first_row, argv[2], argv[1]);
        }
        if (option == 2) {
            deleteRow(fp,fp2);
        }
        if (option == 3) {
            editBook(fp, fp2, argv[1]);
        }
        if (option == 4) {
            searchBook(fp2, first_row);
        }


    } while ( option != 5 );

    fclose(fp);
    fclose(fp2);
    return 0;

}

