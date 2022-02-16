#include "lista.h"

// Retorna uma lista com valor nulo.
Lista * iniciaLista(){
  return NULL;
}

// Alocar um nó da lista na memória.
Lista * alocaLista(){
  Lista * item = (Lista*) malloc(sizeof(Lista));
  return item;
}

// Adiciona um novo tipo ao início da lista.
Lista * addItemLista(Lista *lista, void * endTipo){
  Lista * itemNovo = alocaLista();
  itemNovo->tipoGenerico = endTipo;
  itemNovo->proximo = lista == NULL ? NULL : lista; 
  return itemNovo;
}

// Remove um item da lista.
void * removeItemLista(Lista *lista, void * endTipo){
  Lista * anterior = NULL, *atual;
  atual = lista;
  do{
    if(atual->tipoGenerico == endTipo){
      if(anterior == NULL){
        if(atual->proximo == NULL)
          lista = NULL;
        lista = atual->proximo;
        void * dadoRemovido = atual->tipoGenerico;
        free(atual);
        return dadoRemovido;
      }else{
        anterior->proximo = atual->proximo;
        void * dadoRemovido = atual->tipoGenerico;
        free(atual);
        return dadoRemovido;
      }
    }
    anterior = atual;
    atual = atual->proximo;
  }while(atual != NULL);
  return NULL;
}

// Deleta todos os itens da lista liberando da memória.
void deletaLista(Lista *lista){
  if(lista != NULL){
    while(lista != NULL){
      Lista *aux = lista;
      lista = lista->proximo;
      if(aux != NULL)
        free(aux);
    }
  }
}

// Deleta todos os itens da lista e libera a memória, liberando os tipos alocados.
void deletaListaDadosAlocados(Lista *lista){
  if(lista != NULL){
    while(lista != NULL){
      Lista *aux = lista;
      lista = lista->proximo;
      if(aux != NULL)
        free(aux->tipoGenerico);
        free(aux);
    }
  }
}

/*
*  @copyright João Paulo. 
*  Github: https://github.com/Joao-Paulo-Silva
*/
// Função length retorna a quantidade de nós da lista.
int length(Lista *lista){
  Lista * aux = lista;
  int length = 0;
  while(aux != NULL){
    length++;
    aux = aux->proximo;
  }
  return length;
}

// Função get() pegar o valor da posição do último a ser inserido até o primeiro.
void * get(Lista *lista, unsigned int i){
  if(i >= length(lista))
    return NULL;
  else{
    Lista * aux = lista;
    for(int j = 0; j <= i; j++){
      if(j == i)
        return aux->tipoGenerico;
      aux = aux->proximo;
    }
  }
}

// Função get() pegar o valor da posição do primeiro a ser inserido até o último.
void * getOrdemInsercao(Lista *lista, unsigned int i){
  int quantidade = length(lista);
  if(i >= quantidade)
    return NULL;
  else{
    i = quantidade - i;
    Lista * aux = lista;
    for(int j = 0; j <= i; j++){
      if(j == i)
        return aux->tipoGenerico;
      aux = aux->proximo;
    }
  }
}
