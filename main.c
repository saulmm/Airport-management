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
        printAirportMenu();
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
                        "Are you sure ?", "Si", "No" );
                 
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


