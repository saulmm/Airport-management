
#include <stdio.h>
#include <stdlib.h>

void printSeparator();

void printBox(char* message) {
    printSeparator();
    printf("%s", message);
    printSeparator();
}

void printSeparator() {
    printf("\n════════════════════════\n");
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