#ifndef  TELAPRINCIPAL_H
#define  TELAPRINCIPAL_H

#include <stdio.h>
#include "../model/produto.h"
#include "../model/usuario.h"
#include "../lista/lista.h"
#include "../control/busca.h"

// Função para posicionar o ponteiro na tela do terminal, para efetuar os prints sem apagar a tela.
void positionPrint(int x,  int y);

// Menu inicial do projeto.
unsigned int menuInicial();
//Menu para gerenciar a lista de produtos.
unsigned int produtoMenu();
// Menu para gerenciar a lista de usuários.
unsigned int usuarioMenu();
// Função que pede os dados para inserir um produto, no qual retorna um Produto alocado dinamicamente.
Produto * inserirProduto();
// Função que pede os dados para inserir um usuário, no qual retorna um Usuario alocado dinamicamente.
Usuario * inserirUsuario();
// Função para printar uma lista de produtos.
void printProdutos(Lista *listaProdutos, int sizeProdutos);
// Função para printar uma lista de usuários.
void printUsuarios(Lista *listaUsuarios, int sizeUsuarios);
// Função printar a opção na tela de inserir após ter inserido os dados.
void printPrecioneEnter();

// Funções de busca contém a tela de pesquisa e mostra os resultados, retorna uma lista, para atualizar se o nó for deletado após a pesquisa.
Lista * buscaTelaProduto(Lista *listaProdutos);
Lista * buscaTelaUsuario(Lista *listaUsuarios);

#endif /*TELAPRINCIPAL_H*/