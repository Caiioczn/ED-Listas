#include "TList.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  int index;
  int *linha;
  struct no *prox;
} TNo;

struct list {
  unsigned int M;
  TNo *inicio;
};
// Função Auxiliar
TNo *TNo_createNFill(int, int *);

TList *TList_create(unsigned int M) {
  struct list *nova = malloc(sizeof(struct list));
  if (nova != NULL) {
    nova->M = M;
    nova->inicio = NULL;
  }
  return nova;
}
void TList_print(TList *lista) {
  TNo *aux = lista->inicio;
  while (aux != NULL) {
    printf("Line: %u: ", aux->index);
    for (unsigned int i = 0; i < lista->M; i++)
      printf("%d,", aux->linha[i]);
    putchar('\n');
    aux = aux->prox;
  }
}

TNo *TNo_createNFill(int index, int *linha) {
  TNo *novo = malloc(sizeof(TNo));
  if (novo != NULL) {
    novo->index = index;
    novo->linha = linha;
    novo->prox = NULL;
  }
  return novo;
}

bool TList_insert(TList *lista, int index, int *linha) {
  TNo *novo = TNo_createNFill(index, linha);
  if (novo == NULL)
    return false;
  // Se lista vazia...
  if (lista->inicio == NULL)
    lista->inicio = novo;
  else {
    if (novo->linha[0] < lista->inicio->linha[0]) {
      novo->prox = lista->inicio;
      lista->inicio = novo;
    } else {
      TNo *y = lista->inicio;
      while (y->prox != NULL) {
        if (y->prox->linha[0] > novo->linha[0])
          break;
        y = y->prox;
      }
      novo->prox = y->prox;
      y->prox = novo;
    }
  }
  return true;
}