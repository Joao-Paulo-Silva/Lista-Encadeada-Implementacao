#ifndef  LISTA_H
#define  LISTA_H

#include <stdlib.h>

// Tipo lista armazena um endereço de um valor genérico e o próximo.
typedef struct LISTA{

  void * tipoGenerico;
  struct LISTA * proximo;

}Lista;

// Retorna uma lista com valor nulo.
Lista * iniciaLista();
// Alocar um nó da lista na memória.
Lista * alocaLista();
// Adiciona um novo tipo ao início da lista.
Lista * addItemLista(Lista *lista, void * endTipo);
// Remove um item da lista.
Lista * removeItemLista(Lista *lista, void * endTipo);
// Deleta todos os itens da lista liberando da memória.
void deletaLista(Lista *lista);
// Deleta todos os itens da lista e libera a memória, liberando os tipos alocados.
void deletaListaDadosAlocados(Lista *lista);
// Função length retorna a quantidade de nós da lista.
int length(Lista *lista);

#endif  /*LISTA_H*/