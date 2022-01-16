#include <stdio.h>
#include "lista.h"

void printLista(Lista *inteiros){
  Lista *aux = inteiros;
  while(aux != NULL){
    printf("%d\n", *(int*) aux->tipoGenerico);
    aux = aux->proximo;
  }
}

int main(void) {
  system("clear");
  Lista *inteiros = iniciarLista();
  int valor = 10, valor2 = 20, valor3 = 54;
  inteiros = addItemLista(inteiros, &valor); //add 10
  inteiros = addItemLista(inteiros, &valor2); //add 20
  inteiros = addItemLista(inteiros, &valor3); //add 54
  printLista(inteiros);

  return 0;
}