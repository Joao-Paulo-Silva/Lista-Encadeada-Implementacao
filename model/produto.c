#include "produto.h"
Produto * alocaProduto(){
  Produto * novoProduto = (Produto*) malloc(sizeof(Produto));
  return novoProduto;
}
Produto * iniciaProduto(char nome[50], float preco, char codigo[8], Validade data){
  Produto * novoProduto;
  strcpy(novoProduto->nome, nome);
  strcpy(novoProduto->codigo, codigo);
  novoProduto->preco = preco;
  novoProduto->dataValidade = data;
  return novoProduto;
}

Validade * insereDataValidade(unsigned int dia, unsigned int mes, unsigned int ano){
  Validade * data;
  data->dia = dia;
  data->mes = mes;
  data->ano = ano;
  return data;
}