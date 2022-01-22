#include "usuario.h"

//Alocar um usuário dinamicamente, retorna um Usuario.
Usuario *alocaUsuario(){
  Usuario * novoUsuario = (Usuario*) malloc(sizeof(Usuario));
  return novoUsuario;
}

// Iniciar os valores do usuário e retornar um Usuario alocado dinamicamente.
Usuario * iniciaUsuario(char * nome, char * email, unsigned int idade, char * cpf){
  Usuario * novoUsuario = alocaUsuario();
  strcpy(novoUsuario->nome, nome);
  strcpy(novoUsuario->email, email);
  novoUsuario->idade = idade;
  strcpy(novoUsuario->cpf, cpf);
  return novoUsuario;
}
