#ifndef TLIST_H
#define TLIST_H
#include <stdbool.h>
typedef struct list TList;

/**
 * Cria instâncias de listas.
 * @return TList*
 */
TList *TList_create();
/**
 * Tenta Nomes e telefones
 * @param TList* instância de uma lista
 * @param char[128] Nome da pessoa
 * @param char[30] Telefone
 * @return bool (true em caso de sucesso, false para o caso da lista estar
 * cheia.)
 */
bool TList_insert(TList *, char *, char *);
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

#endif