#ifndef TLIST_H
#define TLIST_H
#include <stdbool.h>
typedef struct no TNo;
typedef struct list TList;
/**
 * Cria instâncias de listas.
 * @return TList*
 * @param unsigned int M o numero de colunas da matriz
 */
TList *TList_create(unsigned int);
/**
 * Tenta inserir um inteiro na lista
 * @param TList* instância de uma lista
 * @param int valor do índice da linha
 * @param int* o endereço do vetor (linha)
 * @return bool (true em caso de sucesso, false para o caso da lista estar
 * cheia.)
 */
bool TList_insert(TList *, int, int *);
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
/**
* Procura e deleta um item da lista.
@param TList* ponteiro para a lista que se deseja operar o item
@param int o valor que se deseja excluir
* @return true caso o item esteja na lista e seja deletado, false caso contrário
*/
bool TList_delete_item(TList *, int);
#endif