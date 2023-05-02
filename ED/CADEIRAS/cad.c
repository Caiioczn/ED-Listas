#include "cad.h"
#include <stdio.h>
#include <stdlib.h>

struct no{
    int dado;
    int qty ;
    No* prox;
};

struct lista{
    No* inicio;
    unsigned int qty;
};

Lista* create(){
    Lista* nova = malloc(sizeof(Lista));
    if (nova!=NULL){
        nova->inicio = NULL;
        nova->qty =0;
    }
    return nova;
};

No* createNo(int dado){
    No* novo = malloc(sizeof(No));
    if (novo!=NULL)
    {
        novo->dado = dado;
        novo->prox = NULL;
    } return novo;
};


int insert(Lista* lista,int dado){
    No* novo = createNo(dado);
    if (novo==NULL)
        return 0;
    if (lista->inicio == NULL){
       novo->prox = novo; 
       lista->inicio = novo;    
    }
    //LISTA NAO NULA
    else{
        No* aux = lista->inicio;
        while (aux->prox != lista->inicio)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
        novo->prox = lista->inicio;
    }
    lista->qty++;
    return 1;
};


void listaPrint(Lista* lista){
    No* aux = lista->inicio;
    do
    {
        if (aux == NULL) break;
        printf("[%d] -> ",aux->dado);
        aux = aux->prox;
        
    } while (aux != lista->inicio);  
};



int DancaRemove(Lista* Cadeiras,Lista*Musica){
  while (Cadeiras->qty > 1) {
    No *aux = Cadeiras->inicio;
    No *ant_aux = Cadeiras->inicio;
    No* aux_msc = Musica->inicio;
    for (int i = 0; i < aux_msc->dado; i++) {
      ant_aux = aux;
      aux = aux->prox;
    }
    ant_aux->prox = aux->prox;
    Cadeiras->inicio = aux->prox;
    free(aux);
    putchar('\n');
    listaPrint(Cadeiras);
    Cadeiras->qty--;
    Musica->inicio = Musica->inicio->prox;
  }
  return Cadeiras->inicio->dado;
}


