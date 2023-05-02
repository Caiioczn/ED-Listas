#ifndef LISTA_ENCAD_H
#define LISTA_ENCAD_H

typedef struct no No;
typedef struct lista Lista;

Lista* create_lista();

int inserir_inicio(Lista*,int);

int inserir_fim(Lista*,int);

int inserir_meio(Lista*,int);

int delete_inicio(Lista*,int*);

int delete_busca(Lista*,int*,int);

void print_lista(Lista*);

#endif