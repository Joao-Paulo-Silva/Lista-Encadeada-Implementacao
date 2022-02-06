## Português

Biblioteca ``arquivo.h``, faz a criação e leitura de arquivos binários contendo uma lista dos tipos ``Produto`` e ``Usuario``.

---

Ir para a biblioteca [clique aqui!](../control/arquivo.h)

---

```C
bool gravaUsuarios(Lista * listaUsuarios, char * patch);
```

Função ``gravaUsuarios`` salvar uma lista de usuários em um arquivo binário, retorna ``verdadeiro`` se houver sucesso e ``falso`` se obter erros. recebe como parâmetro uma lista e o caminho do arquivo.

---

```C
bool gravaProdutos(Lista * listaProdutos, char * patch);
```

Função ``gravaProdutos`` salvar uma lista de produtos em um arquivo binário, retorna ``verdadeiro`` se houver sucesso e ``falso`` se obter erros. recebe como parâmetro uma lista e o caminho do arquivo.

---

```C
Lista * lerArquivoProdutos(char * patch);
```

Função ``lerArquivoProdutos`` ler um arquivo binário a partir do caminho, adiciona os ``Produtos`` dentro do arquivo em uma lista encadeada e retorna a lista ou NULL se houver erros no arquivo ou o mesmo não existir. 

---

```C
Lista * lerArquivoUsuarios(char * patch);
```

Função ``lerArquivoUsuarios`` ler um arquivo binário a partir do caminho, adiciona os ``Usuario`` dentro do arquivo em uma lista encadeada e retorna a lista ou NULL se houver erros no arquivo ou o mesmo não existir. 


---

## English

``arquivo.h`` library, creates and reads binary files containing a list of ``Produto`` and ``Usuario`` types.


---

Go to the library [click here!](../control/arquivo.h)

---

```C
bool gravaUsuarios(Lista * listaUsuarios, char * patch);
```

Function ``gravaUsuarios`` saves a list of users to a binary file, returns ``true`` on success and ``false`` on errors. takes as a parameter a list and the path of the file.

---

```C
bool gravaProdutos(Lista * listaProdutos, char * patch);
```

Function ``gravaProdutos`` saves a list of products to a binary file, returns ``true`` if successful and ``false`` if errors. takes as a parameter a list and the path of the file.

---

```C
Lista * lerArquivoProdutos(char * patch);
```

``lerArquivoProdutos`` function reads a binary file from the path, adds the ``Produto`` inside the file in a linked list and returns the list or NULL if there are errors in the file or it doesn't exist.

---

```C
Lista * lerArquivoUsuarios(char * patch);
```

``lerArquivoUsuarios`` function reads a binary file from the path, adds the ``Usuario`` inside the file in a linked list and returns the list or NULL if there are errors in the file or the file does not exist.

---