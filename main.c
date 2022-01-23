#include <stdio.h>
#include "lista/lista.h"
#include "telaPrincipal.h"

// Main iniciar o programa chamando as funções.
int main(void) {
  unsigned int opcao;
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
            listaProdutos = addItemLista(listaProdutos, inserirProduto());
            printPrecioneEnter();
            if(getchar() != '\n'){
              break;
            }
          }
           break;
          case 2:
            system("clear");
            printProdutos(listaProdutos, length(listaProdutos));
          break;
          case 3:
           listaProdutos = buscaTelaProduto(listaProdutos);
          break;
        }
      break;
      case 2:
        opcao = usuarioMenu();
        switch(opcao){
          case 1:
            while(1){
              listaUsuarios = addItemLista(listaUsuarios, inserirUsuario());
              printPrecioneEnter();
              if(getchar() != '\n'){
                break;
              }
            }
          break;
          case 2:
            system("clear");
            printUsuarios(listaUsuarios, length(listaUsuarios));
          break;
          case 3:
           listaUsuarios = buscaTelaUsuario(listaUsuarios);
          break;
        }
      break;
      case 3:
        if(listaProdutos != NULL)
          deletaListaDadosAlocados(listaProdutos);
        if(listaUsuarios != NULL)
          deletaListaDadosAlocados(listaUsuarios);
        positionPrint(0, 10);
        return EXIT_SUCCESS;
    }  
  }  
}