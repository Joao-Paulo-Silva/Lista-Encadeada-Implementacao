#include "telaPrincipal.h"

// Função para posicionar o ponteiro na tela do terminal, para efetuar os prints sem apagar a tela.
void positionPrint(int x,  int y){
  printf("\033[%d;%dH", y, x);
}

// Função para limpar o terminal e substituir o system(“clear”) ou “cls”, para executar em qualquer sistema.
void limpaConsole(){
  printf("\033[H\033[2J");
}

// Menu inicial do projeto.
unsigned int menuInicial(){
  setbuf(stdin, NULL);
  unsigned int opcao;
  limpaConsole();
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

// Menu para gerenciar a lista de produtos.
unsigned int produtoMenu(){
  setbuf(stdin, NULL);
  unsigned int opcao;
  limpaConsole();
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

// Menu para gerenciar a lista de usuários.
unsigned int usuarioMenu(){
  setbuf(stdin, NULL);
  unsigned int opcao;
  limpaConsole();
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

// Função que pede os dados para inserir um produto, no qual retorna um Produto alocado dinamicamente.
Produto * inserirProduto(){
  setbuf(stdin, NULL);
  Produto * produto = alocaProduto();
  Validade data;
  limpaConsole();
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

  while(1){
    positionPrint(21, 7);
    scanf("%u", &produto->dataValidade.dia);
    if(produto->dataValidade.dia > 31){
      positionPrint(21, 7);
      printf("__/__/____              ┃");
    }else
      break;
  }
  while(1){
    positionPrint(24, 7);
    scanf("%u", &produto->dataValidade.mes);
    if(produto->dataValidade.mes > 12){
      positionPrint(24, 7);
      printf("__/____              ┃");
    }else
      break;
  }
  while(1){
    positionPrint(27, 7);
    scanf("%u", &produto->dataValidade.ano);
    if(produto->dataValidade.ano < 2000 || produto->dataValidade.ano > 9999){
      positionPrint(27, 7);
      printf("____              ┃");
    }else
      break;
  }
  setbuf(stdin, NULL);
  return produto;
}

// Função que pede os dados para inserir um usuário, no qual retorna um Usuario alocado dinamicamente.
Usuario * inserirUsuario(){
  setbuf(stdin, NULL);
  Usuario * usuario = alocaUsuario();
  Validade data;
  limpaConsole();
  printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" 
       "\n┃                   USUÁRIO                 ┃"
       "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫" 
       "\n┃ Nome:                                     ┃"
       "\n┃ Idade:                                    ┃"
       "\n┃ E-mail:                                   ┃"
       "\n┃ CPF:                                      ┃" 
       "\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
  positionPrint(9, 4);
  scanf("%[^\n]", usuario->nome);
  getchar();
  positionPrint(10, 5);
  scanf("%u", &usuario->idade);
  getchar();
  positionPrint(11, 6);
  scanf("%[^\n]", usuario->email);
  getchar();
  positionPrint(8, 7);
  scanf("%[^\n]", usuario->cpf);
  setbuf(stdin, NULL);
  return usuario;
}

// Função para printar uma lista de produtos.
void printProdutos(Lista *listaProdutos, int sizeProdutos){
  limpaConsole();
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
      printf("%.2f", auxP->preco);
      positionPrint(11, 6 + posicaoY);
      printf("%s", auxP->codigo);
      positionPrint(21, 7 + posicaoY);
      if (auxP->dataValidade.dia < 10)
        printf("0");
      printf("%u", auxP->dataValidade.dia);
      positionPrint(24, 7 + posicaoY);
      if (auxP->dataValidade.mes < 10)
        printf("0");
      printf("%u", auxP->dataValidade.mes);
      positionPrint(27, 7 + posicaoY);
      printf("%u", auxP->dataValidade.ano);
      aux = aux->proximo;  
      posicaoY += 7;
      numProd++;
    }
    positionPrint(0, 9 + posicaoY - 7);
    printf("\t\t[\x1b[32mENTER\x1b[0m] para Continuar!   ");
  }else{
    printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
           "┃       Não possui produtos na lista!       ┃\n"
           "┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n"
           "┃         [\x1b[32mENTER\x1b[0m] para Continuar!           ┃\n"
           "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
  }
  getchar();
}

/*
*  @copyright João Paulo. 
*  Github: https://github.com/Joao-Paulo-Silva
*/
// Função para printar uma lista de usuários.
void printUsuarios(Lista *listaUsuarios, int sizeUsuarios){
  limpaConsole();
  Lista * aux = listaUsuarios;
  unsigned int posicaoY = 0, numProd = 1;
  getchar();
  if(aux != NULL){
    printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");

    for(int i = 0; i < sizeUsuarios; i++){
      printf("\n┃                 USUÁRIO                   ┃"
             "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫" 
             "\n┃ Nome:                                     ┃"
             "\n┃ Idade:                                    ┃"
             "\n┃ E-mail:                                   ┃"
             "\n┃ CPF:                                      ┃");
    if(1 + i == sizeUsuarios){
        printf("\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
      }else{
        printf("\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫");
      }
    }
    while(aux != NULL){
      Usuario * auxU = (Usuario *)aux->tipoGenerico;
      positionPrint(28, 2 + posicaoY);
      printf("%u", numProd);
      positionPrint(9, 4 + posicaoY);
      printf("%s", auxU->nome);
      positionPrint(10, 5 + posicaoY);
      printf("%u", auxU->idade);
      positionPrint(11, 6 + posicaoY);
      printf("%s", auxU->email);
      positionPrint(8, 7 + posicaoY);
      printf("%s", auxU->cpf);
      aux = aux->proximo;  
      posicaoY += 7;
      numProd++;
    }
    positionPrint(0, 9 + posicaoY - 7);
    printf("\t\t[\x1b[32mENTER\x1b[0m] para Continuar!   ");
  }else{
    printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
           "┃       Não possui usuários na lista!       ┃\n"
           "┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n"
           "┃         [\x1b[32mENTER\x1b[0m] para Continuar!           ┃\n"
           "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
  }

  getchar();
}

// Função printar a opção na tela de inserir após ter inserido os dados.
void printPrecioneEnter(){
  printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n"
         "┃    Pressione [\x1b[32mENTER\x1b[0m] para continuar       ┃\n"
         "┃  adicionando ou outra tecla para voltar!  ┃\n"
         "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

/* Função de busca contém a tela de pesquisa e mostra os resultados, 
 * retorna uma lista, para atualizar se o nó for deletado após a pesquisa.
 */
Produto * buscaTelaProduto(Lista *listaProdutos){
  limpaConsole();
  setbuf(stdin, NULL);
  Produto * produto;
  unsigned int op;
  char nome[50];
  printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" 
       "\n┃                   PRODUTO                 ┃"
       "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┳━━━━━┫"
       "\n┃ Nome:                               ┃  ⌕  ┃"
       "\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━┛");
  positionPrint(9, 4);
  scanf("%[^\n]", nome);
  setbuf(stdin, NULL);
  produto = buscaProduto(listaProdutos, nome);
  limpaConsole();
  if(produto != NULL){
    printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" 
        "\n┃                   PRODUTO                 ┃"
        "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫" 
        "\n┃ Nome:                                     ┃"
        "\n┃ Preço:                                    ┃"
        "\n┃ Código:                                   ┃"
        "\n┃ Data de Validade: __/__/____              ┃" 
        "\n┣━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━━━━┫"
        "\n┃        1 - \x1b[32mOK\x1b[0m        ┃     2 - \x1b[31mDELETAR\x1b[0m    ┃"
        "\n┣━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━┫"
        "\n┃ Opção:                                    ┃" 
        "\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
      positionPrint(10, 4);
      printf("%s", produto->nome);
      positionPrint(10, 5 );
      printf("%.2f", produto->preco);
      positionPrint(11, 6 );
      printf("%s", produto->codigo);
      positionPrint(21, 7 );
      if (produto->dataValidade.dia < 10)
        printf("0");
      printf("%u", produto->dataValidade.dia);
      positionPrint(24, 7 );
      if (produto->dataValidade.mes < 10)
        printf("0");
      printf("%u", produto->dataValidade.mes);
      positionPrint(27, 7 );
      printf("%u", produto->dataValidade.ano);
      do{
        positionPrint(10, 11);
        printf("                          ");
        positionPrint(10, 11);
        scanf("%u", &op);
      }while(op > 2);
      setbuf(stdin, NULL);
      if(op == 2){
        return (Produto *) removeItemLista(listaProdutos, produto);
      }
  }else{
    printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
           "┃    Não foi encontrado nenhum resultado!   ┃\n"
           "┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n"
           "┃         [\x1b[32mENTER\x1b[0m] para Continuar!           ┃\n"
           "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
    getchar();
  }
  return NULL;

}

/* Função de busca contém a tela de pesquisa e mostra os resultados, 
 * retorna uma lista, para atualizar se o nó for deletado após a pesquisa.
 */
Usuario * buscaTelaUsuario(Lista *listaUsuarios){
  limpaConsole();
  setbuf(stdin, NULL);
  unsigned int op;
  Usuario * usuario;
  char nome[50];
  printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" 
       "\n┃                   USUÁRIO                 ┃"
       "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┳━━━━━┫"
       "\n┃ Nome:                               ┃  ⌕  ┃"
       "\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━┛");
  positionPrint(9, 4);
  scanf("%[^\n]", nome);
  setbuf(stdin, NULL);
  usuario = buscaUsuarios(listaUsuarios, nome);  
  limpaConsole();
  if(usuario != NULL){
    printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" 
         "\n┃                   USUÁRIO                 ┃"
         "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫" 
         "\n┃ Nome:                                     ┃"
         "\n┃ Idade:                                    ┃"
         "\n┃ E-mail:                                   ┃"
         "\n┃ CPF:                                      ┃" 
         "\n┣━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━━━━┫"
         "\n┃        1 - \x1b[32mOK\x1b[0m        ┃     2 - \x1b[31mDELETAR\x1b[0m    ┃"
         "\n┣━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━┫"
         "\n┃ Opção:                                    ┃" 
         "\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
    positionPrint(9, 4);
    printf("%s", usuario->nome);
    positionPrint(10, 5);
    printf("%u", usuario->idade);
    positionPrint(11, 6);
    printf("%s", usuario->email);
    positionPrint(8, 7);
    printf("%s", usuario->cpf);
    do{
      positionPrint(10, 11);
      printf("                                  ");
      positionPrint(10, 11);
      scanf("%u", &op);
    }while(op > 2);
    setbuf(stdin, NULL);
    if(op == 2){
      return (Usuario *) removeItemLista(listaUsuarios, usuario);
    }
  }else{
    printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
           "┃    Não foi encontrado nenhum resultado!   ┃\n"
           "┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫\n"
           "┃         [\x1b[32mENTER\x1b[0m] para Continuar!           ┃\n"
           "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
    getchar();
  }
  return NULL;
}

// Interface com opção de salvar ou sair.
void telaSalvar(Lista * listaProdutos, Lista * listaUsuario, char * patchProdutos, char * patchUsuario){
  unsigned int op;
  do{
    limpaConsole(); 
    printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" 
           "\n┃                 MENU INICIAL              ┃"
           "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫" 
           "\n┃       Salvar informações em arquivo?      ┃"
           "\n┣━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━━━━┫"
           "\n┃     1 - SALVAR       ┃     2 - SAIR       ┃"
           "\n┣━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━┫"
           "\n┃ Opção:                                    ┃" 
           "\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
    positionPrint(10, 8);
    scanf("%u", &op);
  }while(op > 2);    
  if(op == 1){
    limpaConsole();
    bool verificaProduto, verificaUsuario; 
    verificaProduto = gravaProdutos(listaProdutos, patchProdutos);
    verificaUsuario = gravaUsuarios(listaUsuario, patchUsuario);
    if(verificaProduto == true || verificaUsuario == true){
      printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
             "┃     \x1b[32m✓ Salvo com sucesso!\x1b[0m      ┃\n"
             "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
    }else{
      printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
             "┃    \x1b[31m✖ Erro ao salvar arquivos!\x1b[0m      ┃\n"
             "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
    }
  }
}
