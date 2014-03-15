
#include <stdio.h>
#include <stdlib.h>

#include "listas.h"
#include "cola.h"

#include "print_utils.h"
#include "airport.h"



void manageLanding(TLISTA* landingList, TCOLA* waitingQueue) {
    TIPOELEM planeID;
    printBox("Landing request form");
    
    
    printf("\nInsert the plane ID: \n");
    scanf("%d", &planeID);
    
    if(longitud((*landingList)) <= MAX_PLANES) { 
        inserta(landingList, fin(*landingList), planeID);
        printf("Plane added to the landing list.\n");
        printLandingList(*landingList);

    
    } else {
        AnadirCola(waitingQueue, planeID);
        
        printf("The plane [%d] has moved to the waiting queue,\n"
                "there are %d or more planes granted to land.\n", planeID, (MAX_PLANES + 1));
        
    }
}


void landPlane(TLISTA* landingList, TCOLA* waitingQueue) {
    
    if(esVacia(landingList) != 1) {
        TIPOELEM planeID;
        TIPOELEM waitingPlaneID;
        POSICION found;
        
        printBox("Land a plane");
        
        if(esVacia(*landingList) == 1) {
            printf("There is not planes to land...\n");
            return;
        }
           
        printLandingList(*landingList);
        printf("\nInsert the ID of the plane to land \n");
        scanf("%d", &planeID);
        found = buscar(*landingList, planeID);
//        
        if(found != fin(*landingList)) {
            printf("The plane [%d] is landing...", planeID);
            suprime(landingList, found);
            
            if(EsColaVacia(*waitingQueue) != 1) {
                PrimeroCola(*waitingQueue, &waitingPlaneID);
                printf("%d has to land...\n", waitingPlaneID);
                EliminarCola(waitingQueue);
                
                if(waitingPlaneID != 0) 
                    addPlane(waitingPlaneID, landingList, fin(*landingList));
            } 
            
        } else {
            if(EsColaVacia(*waitingQueue) != 1) {
                PrimeroCola(*waitingQueue, &waitingPlaneID);
                printf("The plane [%d] is now landing...", waitingPlaneID);
            } else {
                printf("empty queue...");
            }
        }
//       
//    
    } else {
        printf("empty list...\n");
    }
}


void addPlane(int planeID, TLISTA* landingList, POSICION lastPosition) {
    inserta(landingList, lastPosition, planeID);
    printf("\nPlane [%d] waiting to land", planeID);
}


void printLandingList(TLISTA landingList) {
    POSICION pos = primero(landingList);
    TIPOELEM element;
   
    short counter = 0;
    printBox("PLANES GRANTED TO LAND"
            "\nOption  -  Plane ID");
    
    while (pos != fin(landingList)) {
        counter ++;
        
        recupera(landingList, pos, &element);
        printf("\n(%d) \t- %d",counter, element);
        pos = siguiente(landingList, pos);
    }
    
    printf("\n");
}


void seeWaitingQueue(TCOLA waitingQueue) {
    if (EsColaVacia(waitingQueue)) {
        printf("There are no planes waiting to take land");
    } else {
        TELEMENTO firstPlane;
        PrimeroCola(waitingQueue, &firstPlane);
        
        printf("The plane [%d] is waiting...", firstPlane);
    }
}