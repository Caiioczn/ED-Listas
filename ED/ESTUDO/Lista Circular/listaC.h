#ifndef LISTAC_H
#define LISTAC_H

typedef struct no No;

typedef struct lista listaCircualr;

listaCircualr* createLista();

No* createNo(int); 

int insertFim(listaCircualr*,int);

int insertIncio(listaCircualr*,int);

int insert(listaCircualr*,int,char);

int insert(listaCircualr*,int,char);

void listaPrint(listaCircualr*);

#endif