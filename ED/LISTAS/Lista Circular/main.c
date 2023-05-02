#include "TList.h"
#include <stdio.h>

int main(void) {
  TList *l1 = TList_create();
  int V[] = {7, 1, 5, 0};
  for (int i = 0; i < 4; i++) {
    if (!TList_insert(l1, V[i]))
      printf("Nao consegui inserir o elemento V[%d]=%d\n", i, V[i]);
  }
  TList_print(l1);
  return 0;
}