#ifndef CAD_H
#define CAD_J

typedef struct lista Lista;
typedef struct no No;

Lista* create();

No* createNo(int);

int insert(Lista*,int);

void listaPrint(Lista*);

int DancaRemove(Lista*,Lista*);

#endif