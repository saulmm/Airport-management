


typedef int TIPOELEM;
typedef void * POSICION;
typedef void * TLISTA;

void crea(TLISTA *l);
void destruye(TLISTA *l);
POSICION primero(TLISTA l);
POSICION fin(TLISTA l);
POSICION siguiente(TLISTA l, POSICION p);
POSICION anterior(TLISTA l, POSICION p);
int esVacia(TLISTA l);
void recupera(TLISTA l, POSICION p, TIPOELEM *e);
int longitud(TLISTA l);
void inserta(TLISTA *l, POSICION p, TIPOELEM e);
void suprime(TLISTA *l, POSICION p);
void modifica(TLISTA *l, POSICION p, TIPOELEM e);
POSICION buscar(TLISTA l, TIPOELEM E);







