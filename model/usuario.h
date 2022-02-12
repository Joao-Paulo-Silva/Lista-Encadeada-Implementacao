/*
*  @copyright João Paulo. 
*  Github: https://github.com/Joao-Paulo-Silva
*/

#ifndef  USUARIO_H
#define  USUARIO_H

#include <stdlib.h>
#include <string.h>

// Define um tipo USUARIO.
typedef struct USUARIO{
  char nome[100];
  char email[100];
  unsigned int idade;
  char cpf[10];
}Usuario;

//Alocar um usuário dinamicamente, retorna um Usuario.
Usuario *alocaUsuario();

// Iniciar os valores do usuário e retornar um Usuario alocado dinamicamente.
Usuario * iniciaUsuario(char * nome, char * email, unsigned int idade, char * cpf);

#endif /*USUARIO_H*/