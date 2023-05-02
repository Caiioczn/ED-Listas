#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
    Lista* L1 = create_lista();
    printf("inicio\n");
    int V[] = {4,5,-7,-1};
    for (int i = 0; i < 4; i++)
        inserir_meio(L1,V[i]);
    print_lista(L1);

    inserir_meio(L1,-9);
    print_lista(L1);
    return 0;
}