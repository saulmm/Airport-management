#include <stdio.h>
#include <stdlib.h>


typedef int TIPOELEM;
typedef struct celda {TIPOELEM elemento;
               struct celda * sig;} TCELDA;


typedef TCELDA * POSICION;


typedef struct lista {POSICION inicio;
                int longitud;
                POSICION fin;} * TLISTA;




void crea(TLISTA *l)
{
    *l=(struct lista *) malloc(sizeof(struct lista ));
    (*l)->inicio = (POSICION) malloc(sizeof(TCELDA));
    (*l)->inicio->sig = NULL;
    (*l)->fin = (*l)->inicio ;
    (*l)->longitud=0;
}


void destruye(TLISTA *l)
{
(*l)->fin = (*l)->inicio;
while ((*l)->fin != NULL)
    {
    (*l)->fin = (*l)->fin->sig;
    free((*l)->inicio);
    (*l)->inicio = (*l)->fin;
    }
free(*l);
}


POSICION primero(TLISTA l)
{
    return l->inicio;
}


POSICION fin(TLISTA l)
{
   return l->fin;
}

int esVacia(TLISTA l)
{
   if (l->longitud == 0)   return 1;
   else return 0;
}

void recupera(TLISTA l, POSICION p, TIPOELEM *e)
{
    *e = p->sig->elemento;
}

int longitud(TLISTA l)
{
    return l->longitud;
}

void inserta(TLISTA *l, POSICION p, TIPOELEM e)
{
    POSICION q ;
    q=p->sig;
    p->sig = (TCELDA *) malloc(sizeof(TCELDA)) ;
    p->sig->elemento = e;
    p->sig->sig = q;
    if (q==NULL) (*l)->fin=p->sig;
    (*l)->longitud ++ ;
}



void suprime(TLISTA *l, POSICION p)
{
POSICION q;

q=p->sig;
p->sig=q->sig;
if (p->sig==NULL)
    (*l)->fin = p;
free(q);
(*l)->longitud -- ;
}

void modifica(TLISTA *l, POSICION p, TIPOELEM e)
{
    p->sig->elemento=e;
}





POSICION siguiente(TLISTA l, POSICION p)
{
   return p->sig;
}












POSICION buscar(TLISTA l, TIPOELEM E)
{
    POSICION p,q ;
    TIPOELEM ele;
    int encontrado;

    q=fin(l);

    if (esVacia(l)==0)
    {
        p=primero(l);
        encontrado=0;
        while ( (p!=q) && (encontrado==0) )
            {
            recupera(l,p,&ele);
            if (ele==E) encontrado=1;
            else p=siguiente(l,p);
            }

    }
    return q;


}