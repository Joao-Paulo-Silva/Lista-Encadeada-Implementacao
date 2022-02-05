#include "arquivo.h"

// Funções para gravar uma lista de um determinado tipo, recebe como parâmetro o caminho e a lista, retorna um booleano  verdadeiro se houver sucesso ao gravar e falso se houver erros.
bool gravaUsuarios(Lista * listaUsuarios, char * patch) {
  int tamanhoLista;
  if ((tamanhoLista = length(listaUsuarios)) > 0) {
    FILE * arquivo;
    if ((arquivo = fopen(patch, "wb")) == NULL)
      return false;
    for (int i = 0; i < tamanhoLista; i++) {
      fwrite((Usuario *) get(listaUsuarios, i), sizeof (Usuario), 1, arquivo);
    }
    fclose(arquivo);
    return true;
  } else {
    return false;
  }
}

// Funções para gravar uma lista de um determinado tipo, recebe como parâmetro o caminho e a lista, retorna um booleano  verdadeiro se houver sucesso ao gravar e falso se houver erros.
bool gravaProdutos(Lista * listaProdutos, char * patch) {

  int tamanhoLista;
  if ((tamanhoLista = length(listaProdutos)) > 0) {
    FILE * arquivo;
    if ((arquivo = fopen(patch, "wb")) == NULL)
      return false;
    for (int i = 0; i < tamanhoLista; i++) {
      fwrite((Produto *) get(listaProdutos, i), sizeof (Produto), 1, arquivo);
      fseek(arquivo, (1 + i) * sizeof (Produto), SEEK_SET);
    }
    fclose(arquivo);
    return true;
  } else {
    return false;
  }
}

// Funções leem arquivos a partir do caminho, pegando os dados de  determinados tipos.
Lista * lerArquivoProdutos(char * patch) {
  int i = 0;
  Lista * lista = iniciaLista();
  FILE * arquivo;
  if ((arquivo = fopen(patch, "rb")) == NULL)
    return NULL;
  while (1){
    Produto * pdt = alocaProduto();
    fseek(arquivo, i * sizeof (Produto), SEEK_SET);
    if (fread(pdt, sizeof (Produto), 1, arquivo) == 0) {
      free(pdt);
      break;
    } else {
      lista = addItemLista(lista, pdt);
      i++;
    }
  }
  fclose(arquivo);
  return lista;
}

// Funções leem arquivos a partir do caminho, pegando os dados de  determinados tipos.
Lista * lerArquivoUsuarios(char * patch){
  int i = 0;
  Lista * lista = iniciaLista();
  FILE * arquivo;
  if ((arquivo = fopen(patch, "rb")) == NULL)
    return NULL;
  while (1){
    Usuario * user = alocaUsuario();
    fseek(arquivo, i * sizeof(Usuario), SEEK_SET);
    if (fread(user, sizeof(Usuario), 1, arquivo) == 0) {
      free(user);
      break;
    } else {
      lista = addItemLista(lista, user);
      i++;
    }
  }
  fclose(arquivo);
  return lista;
}