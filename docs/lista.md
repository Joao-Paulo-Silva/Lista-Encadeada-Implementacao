## Português

Biblioteca ``lista.h``, neste arquivo contém um tipo que será usado como os nós da lista denominado ``Lista``, contendo funções para a manipulação dos dados da lista como por exemplo: Inserir dados, deletar lista, pegar dados a partir da posição e excluir um nó dado.

---

Ir para a biblioteca [clique aqui!](../lista/lista.h)

---

```C
typedef struct LISTA{
  [...]
}Lista;
```

Estrutura ``Lista`` contém um variável que armazena o endereço de qualquer tipo usando um ponteiro não definido (``void *``) e uma variável que aponta para o endereço da próxima ``Lista``. 
Para a utilização de tipos genéricos utiliza-se de uma variável com tipo ``void``, para a utilização dos dados como o tipo deve se usar ``(type *)`` antes da variável genérica da struct, Exemplo:

```C
Produto * pdt = (Produto *) Lista->tipoGenerico;
```

---

```C
Lista * iniciaLista();
```

A função ``iniciaLista()`` retorna ``NULL`` para atribuir a lista.

---

```C
Lista * alocaLista();
```

A função ``alocaLista()`` retorna uma ``Lista`` alocada dinamicamente.

---

```C
Lista * addItemLista(Lista *lista, void * endTipo);
```

A função ``addItemLista`` alocar um nó(``Lista``), e adiciona o último nó da lista ao endereço do próximo dentro do novo nó retornando a o novo nó para atualizar a lista.

---

```C
Lista * removeItemLista(Lista *lista, void * endTipo);
```

A função ``removeItemLista`` remove um nó da lista que contenha um tipo genérico igual ao enviado como parâmetro da função, retornado a nova ``Lista`` para atualização.

---

```C
void deletaLista(Lista *lista);
```

A função ``deletaLista`` desloca todos os nós da lista, mas não desaloca os dados.

---

```C
void deletaListaDadosAlocados(Lista *lista);
```

A função ``deletaListaDadosAlocados`` desloca todos os nós da lista e desloca os dados contidos no nó.

```C
int length(Lista *lista);
```

Função ``length`` retorna a quantidade de nós da lista.

---

```C
void * get(Lista *lista, unsigned int i);
```
Função ``get``, retorna o tipo armazenado no nó da posição, seguindo a ordem do último a ser inserido até o primeiro.
Para a utilização da função ``get``, deve se colocar o tipo de dado que será retornado antes, exemplo:

```C
Produto * pdt = (Produto *) get(lista, 5);
```

---

```C
void * getOrdemInsercao(Lista *lista, unsigned int i);
```

Função ``getOrdemInsercao``, retorna o tipo armazenado no nó da posição, seguindo a ordem do primeiro a ser inserido até o último.
Para a utilização da função ``getOrdemInsercao``, deve se colocar o tipo de dado que será retornado antes, exemplo:

```C
Produto * pdt = (Produto *) getOrdemInsercao(lista, 5);
```

---

## English

Library ``lista.h``, in this file contains a type that will be used as nodes of the list called ``Lista``, containing functions for data manipulation such as: inserted data, delete list, data from position and delete a given node.

---

Go to the library [click here!](../lista/lista.h)

---

```C
typedef struct LISTA{
  [...]
}Lista;
```

``Lista`` structure contains a variable that stores the address of any type using an undefined pointer (``void *``) and a variable that points to the address of the next ``Lista``.
For using types use a generic variable with type ``void``, for using data as the type you must use ``(type *)`` before the general variable of the struct, Example:

```C
Produto * pdt = (Produto *) Lista->tipoGenerico;
```

---

```C
Lista * iniciaLista();
```

The ``iniciaLista()`` function returns ``NULL`` to assign the list.

---

```C
Lista * alocaLista();
```

The ``alocaLista()`` function returns a dynamically allocated ``Lista``.

---

```C
Lista * addItemLista(Lista *lista, void * endTipo);
```

The ``addItemLista`` function allocates a node(``Lista``), and adds the last node of the list to the address of the next one within the new node, returning to the new node to update the list.

---

```C
Lista * removeItemLista(Lista *lista, void * endTipo);
```

The ``removeItemLista`` function removes a node from the list that contains a generic type equal to the one sent as a parameter of the function, returning the new ``Lista`` for updating.

---

```C
void deletaLista(Lista *lista);
```

The ``deletaLista`` function shifts all nodes in the list, but does not deallocate the data.

---

```C
void deletaListaDadosAlocados(Lista *lista);
```

The ``deletaListaDadosAlocados`` function shifts all nodes in the list and shifts the data contained in the node.

```C
int length(Lista *lista);
```

Function ``length`` returns the number of nodes in the list.

---

```C
void * get(Lista *lista, unsigned int i);
```
Function ``get``, returns the type stored in the position node, following the order from the last to be inserted to the first.
To use the ``get`` function, you must put the type of data that will be returned first, for example:

```C
Produto * pdt = (Produto *) get(lista, 5);
```

---

```C
void * getOrdemInsercao(Lista *lista, unsigned int i);
```

Function ``getOrdemInsercao``, returns the type stored in the position node, following the order from the first to be inserted to the last.
To use the ``getOrdemInsercao`` function, you must put the type of data that will be returned first, for example:

```C
Produto * pdt = (Produto *) getOrdemInsercao(lista, 5);
```
