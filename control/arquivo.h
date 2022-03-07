/*
*  @copyright João Paulo. 
*  Github: https://github.com/Joao-Paulo-Silva
*/
#ifndef ARQUIVO_H
#define ARQUIVO_H

#include <stdbool.h>  // include para poder utilizar o tipo booleano.
#include <stdio.h>    // include de output para a manipulação de arquivos.
#include "../model/produto.h"
#include "../model/usuario.h"
#include "../lista/lista.h"

// Funções para gravar uma lista de um determinado tipo, recebe como parâmetro o caminho e a lista, retorna um booleano  verdadeiro se houver sucesso ao gravar e falso se houver erros.
bool gravaUsuarios(Lista * listaUsuarios, char * patch);
bool gravaProdutos(Lista * listaProdutos, char * patch);

// Funções leem arquivos a partir do caminho, pegando os dados de  determinados tipos.
Lista * lerArquivoProdutos(char * patch);
Lista * lerArquivoUsuarios(char * patch);


#endif /* ARQUIVO_H */
