/*
*  @copyright João Paulo. 
*  Github: https://github.com/Joao-Paulo-Silva
*/
#include <stdio.h>
#include "lista/lista.h"
#include "view/telaPrincipal.h"

#define PATCHPRODUTOS "model/arquivos/pdt.bn"
#define PATCHUSUARIOS "model/arquivos/user.bn"


// Main iniciar o programa chamando as funções.
int main(void) {

  unsigned int opcao, variavelControle;
  // Variável booleana para verificar se a interface de salvamento será usada.
  bool alteracao = false;
  
  // Criar duas listas com dados se houver arquivos com dados armazenados ou NULL se não encontrados.
  Lista * listaProdutos = lerArquivoProdutos(PATCHPRODUTOS);
  Lista * listaUsuarios = lerArquivoUsuarios(PATCHUSUARIOS);
  
  while(1){ // Início do while
    limpaConsole();
    opcao = menuInicial();
    switch(opcao){ // Início do switch
      case 1:
        opcao = produtoMenu();
        switch(opcao){ // Início do switch
          case 1:
          while(1){
            listaProdutos = addItemLista(listaProdutos, inserirProduto());
            printPrecioneEnter();
            if(getchar() != '\n'){
              break;
            }
          }
          // Define true para marcar que houve alteração na lista, para abrir a opção de salvar ao usuário tentar sair. 
          alteracao = true;
          break;
          case 2:
            limpaConsole();
            printProdutos(listaProdutos, length(listaProdutos));
          break;
          case 3:
            variavelControle = length(listaProdutos);
           listaProdutos = buscaTelaProduto(listaProdutos);
            if(variavelControle != length(listaProdutos))
              alteracao = true; 
          break;
        } // Fim do switch
      break;
      case 2:
        opcao = usuarioMenu();
        switch(opcao){ // Início do switch
          case 1:
            while(1){
              listaUsuarios = addItemLista(listaUsuarios, inserirUsuario());
              printPrecioneEnter();
              if(getchar() != '\n'){
                break;
              }
            }
            // Define true para marcar que houve alteração na lista, para abrir a opção de salvar ao usuário tentar sair. 
            alteracao = true; 
          break;
          case 2:
            limpaConsole();
            printUsuarios(listaUsuarios, length(listaUsuarios));
          break;
          case 3:
            variavelControle = length(listaUsuarios);
            listaUsuarios = buscaTelaUsuario(listaUsuarios);
            if(variavelControle != length(listaUsuarios))
              alteracao = true; 
          break;
        } // Fim do switch
      break;
      case 3:
        if((length(listaProdutos) > 0 || length(listaUsuarios) > 0) && alteracao)
          telaSalvar(listaProdutos, listaUsuarios, PATCHPRODUTOS, PATCHUSUARIOS);
        if(listaProdutos != NULL)
          deletaListaDadosAlocados(listaProdutos);
        if(listaUsuarios != NULL)
          deletaListaDadosAlocados(listaUsuarios);
        positionPrint(0, 10);
        return EXIT_SUCCESS;
    } // Fim do switch
  } // Fim do while
}
