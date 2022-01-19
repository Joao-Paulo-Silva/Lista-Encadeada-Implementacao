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
Lista * removeItemLista(Lista *lista, void * endTipo){
  Lista * anterior = NULL, *atual;
  atual = lista;
  do{
		if(atual->tipoGenerico == endTipo){
			if(anterior == NULL){
				if(atual->proximo == NULL)
					return NULL;
			 	lista = atual->proximo;
				free(atual);
				return lista;
			}else{
				anterior->proximo = atual->proximo;
				free(atual);
				return lista;
			}
		}
		anterior = atual;
		atual = atual->proximo;

  }while(atual->proximo != NULL);
  return lista;
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

int length(Lista *lista){
	Lista * aux = lista;
	int length = 0;
	while(aux != NULL){
		length++;
		aux = aux->proximo;
	}
	return length;
}