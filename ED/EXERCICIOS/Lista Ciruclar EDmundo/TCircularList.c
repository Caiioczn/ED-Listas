#include "TList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
  int pos;
  struct no *prox;
} TNo;

struct list {
  TNo *inicio;
  // Quantidade de elementos na lista
  unsigned int qty;
};

TNo *TNo_createNFill(int);

TList *TList_create() {
  struct list *nova = malloc(sizeof(struct list));
  if (nova != NULL) {
    nova->qty = 0;
    nova->inicio = NULL;
  }
  return nova;
}
void TList_print(TList *lista) {
  TNo *aux = lista->inicio;
  do {
    printf("%d -> ", aux->pos);
    aux = aux->prox;
  } while (aux != lista->inicio);
}

bool TList_insert(TList *lista, int pos) {
  TNo *novo = TNo_createNFill(pos);
  if (novo == NULL)
    return false;
  // Se a lista esta vazia
  if (lista->inicio == NULL) {
    lista->inicio = novo;
    lista->inicio->prox = lista->inicio;
  } else {
    TNo *aux = lista->inicio;
    while (aux->prox != lista->inicio)
      aux = aux->prox;
    aux->prox = novo;
    novo->prox = lista->inicio;
    // lista->inicio = novo;
  }
  lista->qty++;
  return true;
}

TNo *TNo_createNFill(int pos) {
  TNo *novo = malloc(sizeof(TNo));
  if (novo != NULL) {
    novo->pos = pos;
    novo->prox = NULL;
  }
  return novo;
}

int TList_runEdmundo(TList *lista, int M) {
  while (lista->qty > 1) {
    TNo *aux = lista->inicio;
    TNo *ant_aux = lista->inicio;
    for (int i = 0; i < M; i++) {
      ant_aux = aux;
      aux = aux->prox;
    }
    ant_aux->prox = aux->prox;
    lista->inicio = aux->prox;
    free(aux);
    // putchar('\n');
    // TList_print(lista);
    lista->qty--;
  }
  return lista->inicio->pos;
}