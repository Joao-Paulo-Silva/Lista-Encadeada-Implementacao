#ifndef ARQUIVO_H
#define ARQUIVO_H

#include <stdbool.h>
#include <stdio.h>
#include "../model/produto.h"
#include "../model/usuario.h"
#include "../lista/lista.h"


bool gravaUsuarios(Lista * listaUsuarios, char * patch);
bool gravaProdutos(Lista * listaProdutos, char * patch);

Lista * lerArquivoProdutos(char * patch);
Lista * lerArquivoUsuarios(char * patch);

#endif /* ARQUIVO_H */
