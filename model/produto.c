/*
*  @copyright João Paulo. 
*  Github: https://github.com/Joao-Paulo-Silva
*/

#include "produto.h"

//Alocar um produto dinamicamente, retorna um PRODUTO.
Produto * alocaProduto(){
  Produto * novoProduto = (Produto*) malloc(sizeof(Produto));
  return novoProduto;
}

// Iniciar os valores do produto e retornar um produto alocado dinamicamente.
Produto * iniciaProduto(char nome[50], float preco, char codigo[8], Validade data){
  Produto * novoProduto = alocaProduto();
  strcpy(novoProduto->nome, nome);
  strcpy(novoProduto->codigo, codigo);
  novoProduto->preco = preco;
  novoProduto->dataValidade = data;
  return novoProduto;
}

//Insere os valores para formar uma data de validade.
Validade * insereDataValidade(unsigned int dia, unsigned int mes, unsigned int ano){
  Validade * data;
  data->dia = dia;
  data->mes = mes;
  data->ano = ano;
  return data;
}