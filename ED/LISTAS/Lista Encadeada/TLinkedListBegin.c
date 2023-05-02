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

bool TList_insert(TList *lista, int info) {
  TNo *novo = TNo_createNFill(info);
  if (novo == NULL)
    return false;
  if (lista->inicio != NULL)
    novo->prox = lista->inicio;
  lista->inicio = novo;
  return true;
}