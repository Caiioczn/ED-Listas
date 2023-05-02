#ifndef TLIST_H
#define TLIST_H
#include <stdbool.h>
typedef struct no TNo;
typedef struct list TList;
/**
 * Cria instâncias de listas.
 * @return TList*
 */
TList *TList_create();
/**
 * Tenta inserir um inteiro no início da lista
 * @param TList* instância de uma lista
 * @param int info A informação a ser armazenada
 * @return bool (true em caso de sucesso, false para o caso da lista estar
 * cheia.)
 */
bool TList_insert(TList *, int);
/**
 * Imprime a lista.
 * @param TList* instância para uma lista
 */
void TList_print(TList *);
/**
 * Cria um nó passando a quantidade e o índice de referencia.
 @param info quantidade de valores
 */
TNo *TNo_createNFill(int);
#endif