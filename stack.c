#include <stdlib.h>


typedef int typeElement ;	

typedef struct _node 	{
    typeElement element;
    struct _node * sig;	
} Node;
                       
typedef Node *  TPILA;

void emptyStack (TPILA *p) {
    *p = NULL;	
}

void push(TPILA * p , typeElement e) {
    TPILA q;
    q= (TPILA) malloc (sizeof(Node));
    q->element = e ;
    q->sig = *p ;
    *p = q;
}



int isEmpty (TPILA  p ) {
    if (p == NULL)
        return 1;
    
    else 
        return 0;
}



void getTop (TPILA  p, typeElement * pe) {
    int respuesta; 
    respuesta = isEmpty(p);

    if (respuesta == 1) 
        printf ("ERROR, la pila no tiene elementos\n");

    else	
        *pe = p->element;
}

 

void pop(TPILA * p) { 
    TPILA q;
    int respuesta; 

    respuesta = isEmpty(*p);
    
    if (respuesta==1)
       printf("ERROR, ....\n");
    
    else {  
        q = *p;
        *p = (*p)->sig;
        free(q);
    }

}

