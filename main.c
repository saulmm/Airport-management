/* 
 * File:   main.c
 * Author: wtf
 *
 * Created on 9 de marzo de 2014, 22:12
 */

#include <stdio.h>
#include <stdlib.h>

#include "airport.h"
#include "listas.h"

void printMenu();
void manageMenu();
void requestLanding();
void searchAndCancel();
int askForConfirmation (char* message, char* option1, char* option2);

/*
 * 
 */
int main(int argc, char** argv) {
    manageMenu();
    
    printf("Cool");
    return (EXIT_SUCCESS);

    
    
}


void manageMenu() {
    short option;
    int response;
    do {
        printMenu();
        scanf("%hd", &option);
                
        switch(option) {
            case 1:
                requestLanding();
                break;
                
            case 2:
                searchAndCancel();
                break;
                
            case 3:
                 response = askForConfirmation(
                        "Está seguro de querer salir ?", "Si", "No" );
                 
                 if(response == 1) 
                     return;
                 
                 break;
                
            default:
                printf("Opcion incorrecta...");
        }
    
    } while (1 + 1 == 2);
}


void requestLanding() {
    printf("Requesting landing...");
    TLISTA lista;
    
    crea(&lista);
    addPlane(1, &lista);
        
    
    
}


void searchAndCancel() {
   printf("Searching and cancelling plane...");
}

void printMenu () {
    printf("\n----------------------------------");
    printf("\nMenu Principal");
    printf("\n----------------------------------");
    printf("\n1) Solicitud de aterrizaje");
    printf("\n2) Buscar y eliminar avion.");
    printf("\n\n3) Salir");
    printf("\n----------------------------------\n");

    printf("\nEscoja una opcion: ");
}


int askForConfirmation (char* message, char* option1, char* option2) {
    char option;
  
    do {
        printf("%s\n1) %s\n2) %s\n", message, option1, option2);
        printf("\nIntroduzca su opcion:\n");
        
        scanf(" %c", &option);

        switch (option) {
            case '1':
                return 1;
                break;
                
            case '2':
                return 0;
                break;

            default:
                printf("Opcion incorrecta\n");
        }
    } while (1); 
    
    // This never will happen
    return 0;
}