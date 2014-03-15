#include "listas.h"

#include "cola.h"

#define MAX_PLANES 4

void addPlane(int planeID, TLISTA* landingList);


void manageLanding(TLISTA* landingList, TCOLA* waitingQueue);

void printLandingList(TLISTA landingList);

void printLongSeparator();

void seeWaitingQueue(TCOLA waitingQueue);

