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
 * Tenta inserir um inteiro na lista
 * @param TList* instância de uma lista
 * @param int valor inteiro que se deseja inserir na lista
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
 * Deleta uma lista da memória.
 * @param TList* instância de uma lista.
 */
void TList_delete(TList *);
TNo *TNo_createNFill(int);
#endif