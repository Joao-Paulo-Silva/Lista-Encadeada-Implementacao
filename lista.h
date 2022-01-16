#ifndef  LISTA_H
#define  LISTA_H

#include <stdlib.h>

typedef struct LISTA{
  
  void * tipoGenerico;
  struct LISTA * proximo;

}Lista;

// Funções para alocar uma nova lista encadeada.
Lista * iniciarLista();
Lista * CriaListaEncadeada(void * tipoGenerico);

//Funções para manipular os dados da lista.
Lista * addItemLista(Lista *list, void * tipoGenerico);
void * removeItemLista(Lista *list, void * tipoGenerico);
void deletaLista(Lista *list);

#endif  /*LISTA_H*/