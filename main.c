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

#include "cola.h"
#include "print_utils.h"

TLISTA landingList;
TCOLA waitingList;

void initializeAirport();
void printMenu();
void manageMenu();


int main(int argc, char** argv) {
    initializeAirport();
    manageMenu();
    
    printf("Cool");
    return (EXIT_SUCCESS);
}

void initializeAirport() {
    crea(&landingList);
    ColaVacia(&waitingList);
}

void manageMenu() {
    short option;
    int response;
    
    do {
        printMenu();
        scanf("%hd", &option);
        TELEMENTO firstPlane; 
        
        switch(option) {
            case 1:
                manageLanding(&landingList, &waitingList);
                break;
                
            case 2:
                landPlane(&landingList, &waitingList);
                break;
                
            case 3:
                 response = askForConfirmation(
                        "Está seguro de querer salir ?", "Si", "No" );
                 
                 if(response == 1) 
                     return;
                 
                 break;
                 
                 
            case 4:
                
                printLandingList(landingList);
                break;
                
            default:
                printf("Opcion incorrecta...");
        }
    
    } while (1 + 1 == 2);
}




void printMenu () {
    printBox("Main menu");
    printf("\n1) Insert land request.");
    printf("\n2) Land plane.");
    printf("\n4) Print landing list.");
    printf("\n\n3) Exit");
    printSeparator();

    printf("\nSelect 1,2 or 3: \n\n");
}

