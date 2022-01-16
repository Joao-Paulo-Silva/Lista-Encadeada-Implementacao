#include "produto.h"

Produto * iniciaProduto(char nome[50], float preco, char codigo[8], Validade data){
  Produto * novoProduto;
  strcpy(novoProduto->nome, nome);
  strcpy(novoProduto->codigo, codigo);
  novoProduto->preco = preco;
  novoProduto->Validade = data;
  return novoProduto;
}

Validade * insereDataValidade(unsigned int dia, unsigned int mes, unsigned int Ano){
  Validade *data;
  data->dia = dia;
  data->mes = mes;
  data->ano = ano;
  return data;
}