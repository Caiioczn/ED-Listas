#include "TList.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
// Alternativa
struct pessoa {
  char nome[128], telefone[30];
};

struct list {
  int qty;
  struct pessoa data[MAX];
};

/*
struct list {
  int qty;
  char nomes[MAX][128];
  char telefones[MAX][30];
};
*/
// Auxiliares

bool TList_tem_vaga(TList *);

TList *TList_create() {
  TList *nova = malloc(sizeof(TList));
  if (nova != NULL) {
    nova->qty = 0;
  }
  return nova;
}

bool TList_insert(TList *lista, char *nome, char *telefone) {
  if (TList_tem_vaga(lista)) {
    strcpy(lista->data[lista->qty].nome, nome);
    strcpy(lista->data[lista->qty].telefone, telefone);
    lista->qty++;
    return true;
  }
  return false;
}

void TList_print(TList *lista) {
  for (int i = 0; i < lista->qty; i++)
    printf("%s, %s \n", lista->data[i].nome, lista->data[i].telefone);
  putchar('\n');
}
void TList_delete(TList *lista) {
  free(lista); }

bool TList_tem_vaga(TList *lista) { return lista->qty < MAX; }