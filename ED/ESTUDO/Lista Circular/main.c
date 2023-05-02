#include "listaC.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    listaCircualr* L1  = createLista();
    int V[] = {1,2,3,4,5,6,7,8};
    for (int i = 0; i < 8; i++)
    {
        if (!insertFim(L1,V[i]))
            printf("Nao foi possivel inserir = %d",V[i]);
    }
    listaPrint(L1);
    

    return 0;
}
