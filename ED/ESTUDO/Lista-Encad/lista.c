#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

No* create_no(int);

struct no
{
    int dado;
    No* prox;
};


struct lista
{
    No* incio;

};

Lista* create_lista(){
    Lista* nova_lista = malloc(sizeof(Lista));
    if (nova_lista!=NULL)
        nova_lista->incio = NULL;
    else
        printf("Falha na alocaçao");
    return nova_lista;
};

int inserir_fim(Lista* lista,int dado){
    No* novo = create_no(dado);
    if (novo == NULL)
        return 0;
    if (lista->incio == NULL)
        lista->incio = novo;
    else{
        No* aux = lista->incio;
        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
};

int inserir_inicio(Lista* lista,int dado){
    No* novo = create_no(dado);
    if (novo == NULL)
        return 0;
    if (lista->incio == NULL)
        lista->incio = novo;
    else{
        novo->prox = lista->incio;
        lista->incio = novo;
    }
    return 1;
};

int inserir_meio(Lista* lista,int dado){
    No* novo = create_no(dado);
    if (novo == NULL)
        return 0;
    if (lista->incio == NULL)
        lista->incio = novo;
    
    else{
        if (novo->dado < lista->incio->dado)
        {
            novo->prox = lista->incio;
            lista->incio = novo;
        }
        else{
            No* aux = lista->incio;
            while (aux->prox!=NULL)
            {
                if (aux->prox->dado> dado)
                {
                    break;
                }
                aux = aux->prox;                
            }
            novo->prox = aux->prox;
            aux->prox = novo;
        }
        
    }
};

int delete_inicio(Lista* lista,int*dado){
    if (lista == NULL)
        return 0;
    *dado = lista->incio->dado;
    No* temp = lista->incio; 
    lista->incio = lista->incio->prox;
    free(temp);
    return 1;   
    
};


void print_lista(Lista* lista){
    No* aux = lista->incio;
    for (int i = 0; aux != NULL ; i++)
    {
        printf("V[%d] = %d \n",i,aux->dado);
        aux = aux->prox;
    }
};

No* create_no(int dado){
    No* novo_no = malloc(sizeof(No));
    if (novo_no!=NULL)
    {
        novo_no->dado = dado;
        novo_no->prox = NULL;
    }
    else
        printf("Falha ao alocar no");
    return novo_no;
    
};




