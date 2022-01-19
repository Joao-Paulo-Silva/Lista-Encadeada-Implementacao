#include <stdio.h>
#include "lista/lista.h"
#include "telaPrincipal.h"

int main(void) {
  unsigned int opcao;
  int sizeProdutos = 0, sizeUsuarios = 0;
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
						printPrecioneEnter();
						if(getchar() != '\n'){
							break;
						}
					}
           break;
          case 2:
            system("clear");
            printProdutos(listaProdutos, sizeProdutos);
          break;
					case 3:
					 listaProdutos = buscaTelaProduto(listaProdutos);
					 sizeProdutos = length(listaProdutos);
					break;
        }
      break;
      case 2:
        opcao = usuarioMenu();
        switch(opcao){
          case 1:
            while(1){
							sizeUsuarios++;
							listaUsuarios = addItemLista(listaUsuarios, inserirUsuario());
							printPrecioneEnter();
						  if(getchar() != '\n'){
                break;
              }
            }
          break;
          case 2:
            system("clear");
            printUsuarios(listaUsuarios, sizeUsuarios);
          break;
					case 3:
					 listaUsuarios = buscaTelaUsuario(listaUsuarios);
					 sizeUsuarios = length(listaUsuarios);
					break;
        }
      break;
      case 3:
        if(listaProdutos != NULL)
          deletaLista(listaProdutos);
        if(listaUsuarios != NULL)
          deletaLista(listaUsuarios);
        positionPrint(0, 10);
        return EXIT_SUCCESS;
    }  
  }  
}