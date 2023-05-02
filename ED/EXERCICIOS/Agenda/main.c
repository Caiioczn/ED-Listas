#include "TList.h"
#include <stdio.h>



void insertAgendaUI(TList *agenda) {
  char nome[128], telefone[30];
  int inutil;
  printf("Digite o nome: ");
  inutil = scanf("%[^\n]", nome);
  // Limpar o buffer
  inutil = scanf("%*c");
  // fgets(nome, 128, stdin);
  printf("Digite o telefone: ");
  inutil = scanf("%[^\n]", telefone);
  // fgets(telefone, 30, stdin);
  TList_insert(agenda, nome, telefone);
}

int menuUI() {
  int op;
  int inutil;
  printf("Ola, esta eh a agenda marota de ED-I!\n");
  puts("1-> Para inserir");
  puts("2-> Para exibir a agenda");
  puts("0-> Para sair");
  puts("Sua opcao:");
  inutil = scanf("%d", &op);
  // Limpar o buffer
  inutil = scanf("%*c");
  return op;
}

int main(void) {
  TList *agenda = TList_create();
  int op = 5;
  while (op != 0) {
    op = menuUI();
    switch (op) {
    case 1:
      insertAgendaUI(agenda);
      break;
    case 2:
      TList_print(agenda);
      break;
    case 0:
      puts("Byeeeee");
      break;
    default:
      puts("Opção inválida!");
    }
  }
  TList_delete(agenda);
  return 0;
}