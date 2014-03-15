
#include <stdio.h>
#include <stdlib.h>

#include "airport.h"

void printSeparator();

void printBox(char* message) {
    printSeparator();
    printf("%s", message);
    printSeparator();
}

void printSeparator() {
    printf("\n════════════════════════\n");
}

void printLongSeparator() {
    printf("\n════════════════════════════════════════════════\n");
}


void printAirportMenu() {
    printLongSeparator();
    printf("                                           4eec"
    "\n                                              888L"
    "\n   MAIN MENU                                   888b"
    "\n                                                ^8888."
    "\n   1) Insert a new land Request                 '8888c"
    "\n   2) Land a plane                                88888L"
    "\n                                   .8b             :8888b"
    "\n   4) View current landing list    *8b             888888"
    "\n                                    =88888888888888888888888888888a"
    "\n                                    488------------888888--------a"
    "\n   3) Exit                         .88             488888%"
    "\n                                    .             .88888"
    "\n                                                  8888P"
    "\n                                                 d888F"
    "\n                                                J888"
    "\n                                               4888"
    "\n                                              ,88P");
    printLongSeparator();    

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
