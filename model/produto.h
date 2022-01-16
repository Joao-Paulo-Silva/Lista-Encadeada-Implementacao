#ifndef  PRODUTO_H
#define  PRODUTO_H

#include <stdlib.h>
#include <string.h>

typedef struct DATAVALIDADE{
  
  unsigned int dia;
  unsigned int mes;
  unsigned int ano;

} Validade;

typedef struct PRODUTO{
  char nome[50];
  float preco;
  char codigo[8];
  Validade * dataValidade;  
}Produto;

Produto * iniciaProduto(char nome[50], float preco, char codigo[8], Validade * data);

Validade * insereDataValidade(unsigned int dia, unsigned int Mes, unsigned int Ano);

#endif /*PRODUTO_H*/
