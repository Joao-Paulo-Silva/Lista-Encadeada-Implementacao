## Português

Biblioteca ``usuario.h``, cria um tipo struct de usuário e possui funções de alocação e manipulação das variáveis do tipo ``Usuario``.

---

Ir para a biblioteca [clique aqui!](../lista/u.h)

---

```C
typedef struct USUARIO{
  [...]
}Usuario;
```

Estrutura ``USUARIO`` define os dados que compunham um usuário, como nome, email, idade e cpf.

---

```C
Usuario * alocaUsuario();
```

A função ``alocaUsuario()``. esta função alocar um ``Usuario`` e retorna o mesmo.

---

```C
Usuario * iniciaUsuario(char * nome, char * email, unsigned int idade, char * cpf);
```

Função ``iniciaUsuario``, cria um usuário alocado, com as informações enviadas como parâmetros da função.

---

## English

Library ``usuario.h``, creates a user struct type and has functions for allocation and manipulation of variables of type ``Usuario``.

---

Go to the library [click here!](../model/usuario.h)

---

```C
typedef struct USUARIO{
  [...]
}Usuario;
```

The ``USUARIO`` structure defines the data that makes up a user, such as name, email, age and cpf.

---

```C
Usuario * alocaUsuario();
```

The ``alocaUsuario()`` function. this function allocates a ``Usuario`` and returns the same.

---

```C
Usuario * iniciaUsuario(char * nome, char * email, unsigned int idade, char * cpf);
```

Function ``iniciaUsuario``, creates an allocated user, with the information sent as parameters of the function.

---