#include "telaPrincipal.h"

void positionPrint(int x,  int y){
  printf("\033[%d;%dH", y, x);
}

unsigned int menuInicial(){
  unsigned int opcao;
  system("clear");
  printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" 
       "\n┃              MENU INICIAL            ┃"
       "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫"  
       "\n┃ 1 ⊷  Produtos.                       ┃"
       "\n┃ 2 ⊷  Usuários.                       ┃"
       "\n┃ 3 ⊷  Sair.                           ┃"
       "\n┃ Opção:                               ┃" 
       "\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
  positionPrint(10, 7);
  scanf("%d", &opcao);
  return opcao;
}
unsigned int produtoMenu(){
  unsigned int opcao;
  system("clear");
  printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" 
       "\n┃                PRODUTOS              ┃"
       "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫"  
       "\n┃ 1 ⊷  Inserir.                        ┃"
       "\n┃ 2 ⊷  Mostra todos.                   ┃"
       "\n┃ 3 ⊷  Pesquisar.                      ┃"
       "\n┃ 4 ⊷  Voltar.                         ┃"
       "\n┃ Opção:                               ┃" 
       "\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
  positionPrint(10, 8);
  scanf("%d", &opcao);
  return opcao;
}
unsigned int usuarioMenu(){
    unsigned int opcao;
  system("clear");
  printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" 
       "\n┃                USUÁRIO               ┃"
       "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫"  
       "\n┃ 1 ⊷  Inserir.                        ┃"
       "\n┃ 2 ⊷  Mostra todos.                   ┃"
       "\n┃ 3 ⊷  Pesquisar.                      ┃"
       "\n┃ 4 ⊷  Voltar.                         ┃"
       "\n┃ Opção:                               ┃" 
       "\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
  positionPrint(10, 8);
  scanf("%d", &opcao);
  return opcao;
}

