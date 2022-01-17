#include <stdio.h>
#include "lista/lista.h"
#include "telaPrincipal.h"

int main(void) {
  unsigned int opcao;
  int sizeProdutos = 0;
  Lista * listaProdutos = iniciaLista();
  Lista * listaUsuarios = iniciaLista();
  
  while(1){
    system("clear");
    opcao = menuInicial();
    switch(opcao){
      case 1:
        opcao = produtoMenu();
        switch(opcao){
          case 1:
          while(1){
              sizeProdutos++;
              listaProdutos = addItemLista(listaProdutos, inserirProduto());
              getchar();
              printf("\n[ENTER] Para finalizar a inserção!");
              char caracter = getchar();

              if(caracter == '\n'){
                break;
              }
            }
           break;
          case 2:
            system("clear");
            printProduto(listaProdutos, sizeProdutos);
          break;
        }
      break;
      case 2:
        opcao = usuarioMenu();
      break;
      case 3:
        if(listaProdutos != NULL)
          deletaLista(listaProdutos);
        if(listaProdutos != NULL)
          deletaLista(listaUsuarios);
        positionPrint(0, 10);
        return 0;
    }  
  }  
}