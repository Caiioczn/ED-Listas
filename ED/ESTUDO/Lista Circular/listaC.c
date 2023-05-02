#include "listaC.h"
#include <stdio.h>
#include <stdlib.h>
#define END 0
#define BEGIN 1

struct no{
    int info;
    struct no* prox;
};

struct lista
{
    struct no* inicio;
};
  
No* createNo(int info){
    No* novo = malloc(sizeof(No));
    if (novo!=NULL)
    {
        novo->info = info;
        novo->prox = NULL;
    } return novo;
    
}; 

listaCircualr* createLista(){
    listaCircualr* lista = malloc(sizeof(listaCircualr));
    if (lista != NULL){
        lista->inicio = NULL;
    } return lista;
};

int insertIncio(listaCircualr* lista,int info){
    return insert(lista,info,BEGIN);
};

int insertFim(listaCircualr* lista,int info){
    return insert(lista,info,END);
};


int insert(listaCircualr* lista,int info,char flag){
    No* novo = createNo(info);
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
    if (flag == BEGIN)
        lista->inicio = novo;  
    return 1;
};


void listaPrint(listaCircualr* lista){
    No* aux = lista->inicio;
    do
    {
        if (aux == NULL) break;
        printf("[%d] -> ",aux->info);
        aux = aux->prox;
        
    } while (aux != lista->inicio);
    
};

// int insertIncio(listaCircualr* lista,int info){
//     No* novo = createNo(info);
//     if (novo==NULL)
//         return 0;
//     if (lista->inicio == NULL)
//        novo->prox = novo; //POSSIVEL ERRO --> nn funciona novo->prox
//     //LISTA NAO NULA
//     else{
//         No* aux = lista->inicio;
//         while (aux->prox != lista->inicio)
//         {
//             aux = aux->prox;
//         }
//         aux->prox = novo;
//         novo->prox = lista->inicio;
//     }
//     lista->inicio = novo;    
//     return 1;
    
// };
