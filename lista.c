#include "lista.h"

// Funções para alocar uma nova lista encadeada.
Lista * iniciarLista(){
  return NULL;
}
Lista *CriaListaEncadeada(void * tipoGenerico){
  Lista * item = (Lista*) malloc(sizeof(Lista));
  item->tipoGenerico = tipoGenerico;
  return item;
}

//Funções para manipular os dados da lista.
Lista * addItemLista(Lista *list, void * tipoGenerico){
  Lista * itemNovo = CriaListaEncadeada(tipoGenerico);
  if(list == NULL){
    itemNovo->proximo = NULL;
  }else{
    itemNovo->proximo = list;
  }
  return itemNovo;
}

void * removeItemLista(Lista *list, void * tipoGenerico){
  Lista * anterior, *atual;
  atual = list;
  do{
    if(atual == tipoGenerico){
      anterior->proximo = atual->proximo;
    }else{
      anterior = atual;
      atual = atual->proximo;
    }
  }while(atual->proximo != NULL);
  
}
void deletaLista(Lista *list){
  if(list != NULL){
    while(1){
      Lista *aux = list;
      list = list->proximo;
      if(aux == NULL){
        break;
      }else{
        free(aux);
      }
    }
  }
}