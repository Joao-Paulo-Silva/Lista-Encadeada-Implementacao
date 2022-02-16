#include "arquivo.h"

// Funções para gravar uma lista de um determinado tipo, recebe como parâmetro o caminho e a lista, retorna um booleano  verdadeiro se houver sucesso ao gravar e falso se houver erros.
bool gravaUsuarios(Lista * listaUsuarios, char * patch) {
  int tamanhoLista;
  // Verifica se a lista possui dados.
  if ((tamanhoLista = length(listaUsuarios)) > 0) { 
    FILE * arquivo;
     // cria ou sobrescreve o arquivo binário no caminho informado com “wb”
    if ((arquivo = fopen(patch, "wb")) == NULL)
      return false; // Retorna False se houver erros ao criar o arquivo.
    for (int i = 0; i < tamanhoLista; i++) {
      // Grava um tipo Usuario, utilizando o tamanho do mesmo com sizeof e a quantidade de dados por escrita.
      fwrite((Usuario *) get(listaUsuarios, i), sizeof (Usuario), 1, arquivo); 
    }
    fclose(arquivo); // Fecha o arquivo.
    return true;
  } else {
    return false;
  }
}

// Funções para gravar uma lista de um determinado tipo, recebe como parâmetro o caminho e a lista, retorna um booleano  verdadeiro se houver sucesso ao gravar e falso se houver erros.
bool gravaProdutos(Lista * listaProdutos, char * patch) {

  int tamanhoLista;
  // Verifica se a lista possui dados.
  if ((tamanhoLista = length(listaProdutos)) > 0) { 
    FILE * arquivo;
    // cria ou sobrescreve o arquivo binário no caminho informado com “wb”
    if ((arquivo = fopen(patch, "wb")) == NULL) 
      return false; // Retorna False se houver erros ao criar o arquivo.
    for (int i = 0; i < tamanhoLista; i++) {
      // Grava um tipo Produto, utilizando o tamanho do mesmo com sizeof e a quantidade de dados por escrita.
      fwrite((Produto *) get(listaProdutos, i), sizeof (Produto), 1, arquivo); 
    }
    fclose(arquivo);  // Fecha o arquivo.
    return true;
  } else {
    return false;
  }
}

// Funções leem arquivos a partir do caminho, pegando os dados de  determinados tipos.
Lista * lerArquivoProdutos(char * patch) {
  Lista * lista = iniciaLista();
  FILE * arquivo;
  if ((arquivo = fopen(patch, "rb")) == NULL) // Abre arquivo usando "rb", se houver erro retorna NULL.
    return NULL;
  while (1){
    Produto * pdt = alocaProduto(); // Aloca um produto para receber os dados do arquivo.
    // Ler a quantidade de bytes informados e insere na no tipo Produto, se a leitura retorna 0 bytes desaloca a variável Produto e para o loop.
    if (fread(pdt, sizeof (Produto), 1, arquivo) == 0) {
      free(pdt);
      break;
    } else { // Se não adicionar o Produto a lista.
      addItemLista(lista, pdt);
    }
  }
  fclose(arquivo); // Fecha o arquivo.
  return lista;
}
/*
*  @copyright João Paulo. 
*  Github: https://github.com/Joao-Paulo-Silva
*/

// Funções leem arquivos a partir do caminho, pegando os dados de  determinados tipos.
Lista * lerArquivoUsuarios(char * patch){
  Lista * lista = iniciaLista();
  FILE * arquivo;
  if ((arquivo = fopen(patch, "rb")) == NULL) // Abre arquivo usando "rb", se houver erro retorna NULL.
    return NULL;
  while (1){
    Usuario * user = alocaUsuario();// Aloca um usuário para receber os dados do arquivo.
    // Ler a quantidade de bytes informados e insere na no tipo Usuario, se a leitura retorna 0 bytes desaloca a variável Usuario e para o loop.
    if (fread(user, sizeof(Usuario), 1, arquivo) == 0) {
      free(user);
      break;
    } else { // Se não adicionar o Produto a lista.
      addItemLista(lista, user);
    }
  }
  fclose(arquivo);  // Fecha o arquivo.
  return lista;
}
