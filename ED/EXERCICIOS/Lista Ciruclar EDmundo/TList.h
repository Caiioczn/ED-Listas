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
 * Roda o processo do exército de edmundo.
 * @param CircularList e o num de passadas
 * @return a posição do último elemento restante após o processo.
 */
int TList_runEdmundo(TList *, int);
#endif