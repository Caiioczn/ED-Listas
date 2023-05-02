#include "TList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int info;
  struct no *prox;
} TNo;

struct list {
  TNo *inicio;
};
// Função Auxiliar
TNo *TNo_createNFill(int);

TList *TList_create() {
  struct list *nova = malloc(sizeof(struct list));
  if (nova != NULL) {
    nova->inicio = NULL;
  }
  return nova;
}
void TList_print(TList *lista) {
  TNo *aux = lista->inicio;
  while (aux != NULL) {
    printf("[info:%d, prox:%p] -> ", aux->info, aux->prox);
    aux = aux->prox;
  }
}

TNo *TNo_createNFill(int info) {
  TNo *novo = malloc(sizeof(TNo));
  if (novo != NULL) {
    novo->info = info;
    novo->prox = NULL;
  }
  return novo;
}