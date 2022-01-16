#include <stdio.h>
#include "lib/lista.h"
#include "view/telaPrincipal.h"

int main(void) {
  unsigned int opcao;

  Lista * listaProdutos = iniciaLista();
  Lista * listaUsuarios = iniciaLista();
  
  while(1){
    opcao = menuInicial();
    switch(opcao){
      case 1:
        opcao = produtoMenu();
      break;
      case 2:
        opcao = usuarioMenu();
      break;
      case 3:
        positionPrint(0, 10);
        return 0;
    }  
  }  
}