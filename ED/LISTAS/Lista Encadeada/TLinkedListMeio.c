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
  // Se lista vazia...
  if (lista->inicio == NULL)
    lista->inicio = novo;
  else {
    if (novo->info < lista->inicio->info) {
      novo->prox = lista->inicio;
      lista->inicio = novo;
    } else {
      TNo *y = lista->inicio;
      while (y->prox != NULL) {
        if (y->prox->info > novo->info)
          break;
        y = y->prox;
      }
      novo->prox = y->prox;
      y->prox = novo;
    }
  }
  return true;
}
