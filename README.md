# Lista encadeada em liguagem C

#### ``@author João Paulo``
Este projeto demonstra a criação e utilização de uma lista encadeada para tipos genéricos com a linguagem c, no qual utiliza de duas ``struct`` e a mesma lista para armazená-las. Para a criação da lista sem a necessidade de um tipo específico nos nós, os mesmos armazenam os endereços com uma variável não definida(``void``). 

A lista encadeada com tipos genéricos usa ponteiro ``*`` e utilizando bibliotecas customizadas ``Exemplo.h``, para uma melhor organização do algoritmo.

### Lista Encadeada:
A lista encadeada é uma lista, no qual o último item inserido torna-se o primeiro da lista. cada dado conhece o endereço do próximo, sendo utilizado para percorrer pela lista.

![alt text](img/listaEncadeada.svg)
**Exemplo de ``struct`` para lista encadeada com inteiros:**

---

~~~	c/c++
// Estrutura da lista encadeada. 
  typedef struct LISTA{
    int valor;
    struct LISTA * proximo;
  }Lista;
~~~

O ``struct LISTA * proximo;`` armazena o endereço do próximo nó da lista.

---

### Exemplo utilizado neste projeto:

Neste projeto será criado 2 lista encadeada usando a lista genérica que se encontra na pasta ``lista/lista.h`` e ``lista/lista.c``. As lista serão criadas com dois ``typedef struct``, denominados como ``Produto`` e ``Usuario``.

### Generalização dos tipos para armazenar na lista:

Para armazenar os dados na lista de forma genérica, os dados serão armazenados no endereço do tipo ``void``, para apontar para qualquer endereço armazenado na memória. **Exemplo:**  ``void * generico;``.

---

### Adicionando dados ca lista:

Para adicionar valores a lista será utilizado uma variável auxiliar do tipo ``Lista`` para armazenar o início da lista atual. Para encadear a lista é necessário salvar o nó atual antes de atualizar o primeiro da lista. Exemplo:

~~~ c/c++
  Lista * aux = listaAtual;
  listaAtual = novoNó;
  listaAtual->proximo = aux;
~~~

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
~~~ c/c++
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
~~~
	