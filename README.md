# Lista encadeada em liguagem C

#### ``@author João Paulo``, Link para executar o projeto no [replit.com](https://replit.com/@JooPaulodaSilv1/ListaEncadeadaExemplo).

Este projeto demonstra a criação e utilização de uma lista encadeada para tipos genéricos com a linguagem c, no qual utiliza de duas ``struct`` e a mesma lista para armazená-las. Para a criação da lista sem a necessidade de um tipo específico nos nós, os mesmos armazenam os endereços com uma variável não definida(``void``). 

A lista encadeada com tipos genéricos usa ponteiro ``*`` e utilizando bibliotecas customizadas ``Exemplo.h``, para uma melhor organização do algoritmo.

### Lista Encadeada:
A lista encadeada é uma lista, no qual o último item inserido torna-se o primeiro da lista. cada dado conhece o endereço do próximo, sendo utilizado para percorrer pela lista.
<p align = center> 

![alt text ><](img/listaEncadeada.svg) <p>

**Exemplo de ``struct`` para lista encadeada com inteiros:**

---

```c/c++
// Estrutura da lista encadeada. 
  typedef struct LISTA{
    int valor;
    struct LISTA * proximo;
  }Lista;
```

O ``struct LISTA * proximo;`` armazena o endereço do próximo nó da lista.

---

### Exemplo utilizado neste projeto:

Neste projeto será criado 2 lista encadeada usando a lista genérica que se encontra na pasta ``lista/lista.h`` e ``lista/lista.c``. As lista serão criadas com dois ``typedef struct``, denominados como ``Produto`` e ``Usuario``.

### Generalização dos tipos para armazenar na lista:

Para armazenar os dados na lista de forma genérica, os dados serão armazenados no endereço do tipo ``void``, para apontar para qualquer endereço armazenado na memória. **Exemplo:**  ``void * generico;``.

---

### Adicionando dados ca lista:

Para adicionar valores a lista será utilizado uma variável auxiliar do tipo ``Lista`` para armazenar o início da lista atual. Para encadear a lista é necessário salvar o nó atual antes de atualizar o primeiro da lista. Exemplo:

```c/c++
  Lista * aux = listaAtual;
  listaAtual = novoNó;
  listaAtual->proximo = aux;
```

Com isso no primeiro nó inserido na lista seu próximo apontará para um valor nulo(``NULL``). Sendo utilizado para verificar o final da lista nas interações utilizadas na lista como por exemplo deletar a lista ou mostrar os dados armazenados.

#### Exemplo de uma lista encadeada armazenando dados:

| Posição ao inserir:  |      5      |      4      |      3      |      2      |      1      |
|:--------------------:|:-----------:|:-----------:|:-----------:|:-----------:|:-----------:|
|         Dados:       | ``valor5``  | ``valor4``  | ``valor3``  | ``valor2``  |  ``valor1`` |
| Endereço do próximo: | ``&valor4`` | ``&valor3`` | ``&valor2`` | ``&valor1`` |  ``NULL``   |
|  Posição na lista:   |      0      |      1      |       2     |      3      |      4      |

---

### Percorrendo a lista:

Para percorrer a lista utiliza-se de um loop e uma variável auxiliar para armazenar os nós atuais.

#### Exemplo:
```c/c++
// Exemplo de função que percorre a lista.
  int percorrendoLista(Lista * lista, int i){
	  aux = lista;
  	int posicao = 0;
	  while(aux != NULL){
		  if(posicao == i){
			  return lista->valor;
	  	}
		  aux = aux->proximo;
	  }
	  printf("Posição inválida.");
	  return NULL;
  }
```

#### **Telas do projeto**


##### **Menu Inicial:**

![alt text ><](img/menuInicial.png)

No menu inicial o usuário pode decidir selecionar produtos, usuários ou sair. 

--- 

##### **Menus dos tipos usados, ``Produto`` e ``Usuario``:**

![alt text ><](img/menusDosTipos.png)

Nesses menus o usuário pode decidir por inserir, mostrar todos os dados, pesquisar ou voltar ao menu inicial. 

---

##### **Inserir Informações dos ``Produtos`` e ``Usuarios``:**

![alt text ><](img/inserirDados.png)

Nessas telas o usuário insere os dados de cada tipo.


###### Exemplo dos menus após inserir:

![alt text ><](img/inserirDadosValores.png)

Após inserir o usuário pode continuar inserindo ou voltar ao menu inicial.

---

##### **Mostrando todos os dados da lista:**

![alt text ><](img/mostraDados.png)

Mostra todos os dados contidos na lista.

---

##### **Telas de pesquisas:**

![alt text ><](img/pesquisas.png)

Nessas telas o usuário pode informar um nome para efetuar a pesquisa.

---

##### **Telas dos resultados das pesquisas:**

![alt text ><](img/resultadosPesquisa.png)

A tela de resultados mostra as informações encontradas e oferece opção para deletar o dado da lista.

---

### Conclusão:

A utilização de lista encadeada, ao contrário de vetores, oferece a opção de armazenar os dados de forma dinâmica. Ao contrário de um vetor uma quantidade de dados pré-definida antes de inserir os dados limitando a quantidade ao valor dado para a variável. Exemplo: ``int vetor[10]``, sendo possível armazenar apenas 10 valores, não podendo ser modificado após definir a quantidade de dados do vetor.