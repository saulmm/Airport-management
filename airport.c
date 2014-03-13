
#include <stdlib.h>
#include <string.h>
#include "listas.h"
#include "cola.h"

#include "airport.h"


int validatePlaneID(char* planeID) {
    return 0;

}


void addPlane(int planeID, TLISTA* landingList) {
    if(landingList == NULL){
        crea(landingList);
        printf("Lista vacía... creando");
    }
    
    
    inserta(landingList, fin(landingList), planeID);
        
       

}