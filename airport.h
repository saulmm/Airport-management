#include "listas.h"

#include "cola.h"

#define MAX_PLANES 4

void addPlane(int planeID, TLISTA* landingList, POSICION lastPosition);


void manageLanding(TLISTA* landingList, TCOLA* waitingQueue);

void printLandingList(TLISTA landingList);

void seeWaitingQueue(TCOLA waitingQueue);

