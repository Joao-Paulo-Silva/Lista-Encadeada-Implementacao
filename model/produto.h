#ifndef  PRODUTO_H
#define  PRODUTO_H

#include <stdlib.h>
#include <string.h>

// Tipo que armazena a data de validade dos produtos.
typedef struct DATAVALIDADE{
  
  unsigned int dia;
  unsigned int mes;
  unsigned int ano;

} Validade;

//Tipo que define um produto.
typedef struct PRODUTO{
  char nome[50];
  float preco;
  char codigo[8];
  Validade dataValidade;  
}Produto;

//Alocar um produto dinamicamente, retorna um PRODUTO.
Produto * alocaProduto();

// Iniciar os valores do produto e retornar um produto alocado dinamicamente.
Produto * iniciaProduto(char nome[50], float preco, char codigo[8], Validade data);

//Insere os valores para formar uma data de validade.
Validade * insereDataValidade(unsigned int dia, unsigned int Mes, unsigned int Ano);

#endif /*PRODUTO_H*/
