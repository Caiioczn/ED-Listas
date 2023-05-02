#include "TList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
  int info;
  struct no *prox;
} TNo;

struct list {
  TNo *inicio;
};

TList *TList_create() {
  struct list *nova = malloc(sizeof(struct list));
  if (nova != NULL) {
    nova->inicio = NULL;
  }
  return nova;
}
void TList_print(TList *lista) {
  TNo* aux = lista->inicio;
  do{
      printf("%d -> ", aux->info);
      aux = aux->prox;
    }while(aux!=lista->inicio);
}

bool TList_insert(TList *lista, int info) {
  TNo* novo = TNo_createNFill(info);
  if(novo == NULL)
    return false;
  //Se a lista esta vazia
  if(lista->inicio == NULL)
  {
    lista->inicio = novo;
    lista->inicio->prox = lista->inicio;
  }else{
    TNo* aux = lista->inicio;
    while(aux->prox != lista->inicio)
      aux = aux->prox;
    aux->prox = novo;
    novo->prox = lista->inicio;
    lista->inicio = novo;
  }
  return true;
}

TNo *TNo_createNFill(int info) {
  TNo *novo = malloc(sizeof(TNo));
  if (novo != NULL) {
    novo->info = info;
    novo->prox = NULL;
  }
  return novo;
}
