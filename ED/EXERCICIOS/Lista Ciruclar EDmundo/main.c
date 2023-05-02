#include "TList.h"
#include <stdio.h>

TList *geraOExercito(int N) {
  TList *l1 = TList_create();
  for (int i = 1; i <= N; i++)
    TList_insert(l1, i);
  return l1;
}

int main(void) {
  int N, M;
  scanf("%d %d", &N, &M);
  TList *l1 = geraOExercito(N);

  // TList_print(l1);
  int pos = TList_runEdmundo(l1, M);
  printf("%d\n", pos);
  return 0;
}