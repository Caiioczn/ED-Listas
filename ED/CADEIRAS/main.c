#include "cad.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtCadeira, qtMusica;
    scanf("%d %d",&qtCadeira,&qtMusica);

    Lista* Cadeira = create();
    Lista* Musica = create();

    for (int i = 1; i <= qtCadeira; i++)
    {
        insert(Cadeira,i);
    }
    int Smsc;
    for (int i = 0; i < qtMusica; i++)
    {
        scanf("%d",&Smsc);
        insert(Musica,Smsc);
    }
    listaPrint(Cadeira);
    printf("\n");
    listaPrint(Musica);

    // int Ucadeira = DancaRemove(Cadeira,Musica);
    // printf("\n%d\n",Ucadeira);
    // listaPrint(Cadeira);

    return 0;
}