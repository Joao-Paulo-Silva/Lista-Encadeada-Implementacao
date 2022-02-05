#include <stdio.h>
#include "lista/lista.h"
#include "view/telaPrincipal.h"

#define PATCHPRODUTOS "model/arquivos/pdt.bn"
#define PATCHUSUARIOS "model/arquivos/user.bn"


// Main iniciar o programa chamando as funções.
int main(void) {
  unsigned int opcao;
  
  // Criar duas listas com dados se houver arquivos com dados armazenados ou NULL se não encontrados.
  Lista * listaProdutos = lerArquivoProdutos(PATCHPRODUTOS);
  Lista * listaUsuarios = lerArquivoUsuarios(PATCHUSUARIOS);
  
  while(1){
    limpaConsole();
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
            limpaConsole();
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
            limpaConsole();
            printUsuarios(listaUsuarios, length(listaUsuarios));
          break;
          case 3:
           listaUsuarios = buscaTelaUsuario(listaUsuarios);
          break;
        }
      break;
      case 3:
        if(length(listaProdutos) > 0 || length(listaUsuarios) > 0)
          telaSalvar(listaProdutos, listaUsuarios, PATCHPRODUTOS, PATCHUSUARIOS);
        if(listaProdutos != NULL)
          deletaListaDadosAlocados(listaProdutos);
        if(listaUsuarios != NULL)
          deletaListaDadosAlocados(listaUsuarios);
        positionPrint(0, 10);
        return EXIT_SUCCESS;
    }  
  }  
}
