# Lista encadeada em liguagem C

#### ``@author João Paulo``

Criando uma lista encadeada com tipos genéricos usando ponteiro ``*`` e utilizando bibliotecas customizadas ``Exemplo.h``, para uma melhor organização do algoritmo.

A lista encadeada é uma lista, no qual o último item inserido torna-se o primeiro da lista. cada dado conhece o endereço do próximo, sendo utilizado para percorrer pela lista.

![alt text](img/listaEncadeada.svg)
**Exemplo de ``struct`` para lista encadeada com inteiros:**

---

~~~ c/c++
// Estrutura da lista encadeada. 
  typedef struct LISTA{
    int valor;
    struct LISTA * proximo;
  }Lista;
~~~

O ``struct LISTA * proximo;`` armazena o endereço do próximo nó da lista.

---

## Exemplo utilizado neste projeto:

Neste projeto será criado 2 lista encadeada usando a lista genérica que se encontra na pasta ``lib/lista.h & .c``. As lista serão criadas com dois ``typedef struct``, denominados como ``Produto`` e ``Usuario``.

### Generalização dos tipos para armazenar na lista:

Para armazenar os dados na lista de forma genérica, os dados serão armazenados no endereço do tipo ``void``, para apontar para qualquer endereço armazenado na memória. **Exemplo:** ``void * generico;``.

---

### Adicionando dados a lista:

Para adicionar valores a lista será utilizado uma variável auxiliar do tipo ``Lista`` para armazenar o início da lista atual. Para encadear a lista é necessário salvar o nó atual antes de atualizar o primeiro da lista. Exemplo:

~~~ c/c++
  Lista * aux = listaAtual;
  listaAtual = novoNó;
  listaAtual->proximo = aux;
~~~