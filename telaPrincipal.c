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
Produto * inserirProduto(){
  getchar();
  Produto * produto = alocaProduto();
  Validade data;
  system("clear");
  printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" 
       "\n┃                   PRODUTO                 ┃"
       "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫" 
       "\n┃ Nome:                                     ┃"
       "\n┃ Preço:                                    ┃"
       "\n┃ Código:                                   ┃"
       "\n┃ Data de Validade: __/__/____              ┃" 
       "\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
  positionPrint(10, 4);
  scanf("%[^\n]", produto->nome);
  getchar();
  positionPrint(10, 5);
  scanf("%f", &produto->preco);
  getchar();
  positionPrint(11, 6);
  scanf("%[^\n]", produto->codigo);
  getchar();
  positionPrint(21, 7);
  scanf("%u", &produto->dataValidade.dia);
  positionPrint(24, 7);
  scanf("%u", &produto->dataValidade.mes);
  positionPrint(27, 7);
  scanf("%u", &produto->dataValidade.ano);
  return produto;
  
}

void printProduto(Lista *listaProdutos, int sizeProdutos){
  Lista * aux = listaProdutos;
  unsigned int posicaoY = 0, numProd = 1;
  getchar();
  if(aux != NULL){
    printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
    for(int i = 0; i < sizeProdutos; i++){
      printf("\n┃                 PRODUTO                   ┃"
              "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫" 
              "\n┃ Nome:                                     ┃"
              "\n┃ Preço:                                    ┃"
              "\n┃ Código:                                   ┃"
              "\n┃ Data de Validade:   /  /                  ┃");
    if(1 + i == sizeProdutos){
        printf("\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
      }else{
        printf("\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫");
      }
    } 

    while(aux != NULL){
      Produto * auxP = (Produto *)aux->tipoGenerico;
      positionPrint(27, 2 + posicaoY);
      printf("%u", numProd);
      positionPrint(10, 4 + posicaoY);
      printf("%s", auxP->nome);
      positionPrint(10, 5 + posicaoY);
      printf("%f", auxP->preco);
      positionPrint(11, 6 + posicaoY);
      printf("%s", auxP->codigo);
      positionPrint(21, 7 + posicaoY);
      printf("%u", auxP->dataValidade.dia);
      positionPrint(24, 7 + posicaoY);
      printf("%u", auxP->dataValidade.mes);
      positionPrint(27, 7 + posicaoY);
      printf("%u", auxP->dataValidade.ano);
      aux = aux->proximo;  
      posicaoY += 7;
      numProd++;
    }
    
  }else{
    printf("Não possui produtos na lista!");
  }
  positionPrint(0, 9 + posicaoY - 7);
  printf("[\x1b[32mENTER\x1b[0m] para Continuar!\n");
  getchar();
}