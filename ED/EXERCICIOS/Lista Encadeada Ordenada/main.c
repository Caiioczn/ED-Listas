#include "TList.h"
#include <stdio.h>
int main(void) {
  /**
  Depois de compilar o código e gerar o executável a.out:
  Para direcionar a entrada use:
  ./a.out <input.txt
  */
  unsigned int N, M;
  scanf("%u %u", &N, &M);
  int Matrix[N][M];
  TList *l1 = TList_create(M);
  for (unsigned int i = 0; i < N; i++) {
    for (unsigned int j = 0; j < M; j++) {
      scanf("%d", &Matrix[i][j]);
      // printf("%d ", Matrix[i][j]);
    }
    TList_insert(l1, i + 1, Matrix[i]);
  }
  TList_print(l1);
  return 0;
}