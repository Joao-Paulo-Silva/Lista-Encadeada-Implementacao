# Lista encadeada em liguagem C

#### ``@author João Paulo``

Criando uma lista encadeada com tipos genéricos usando ponteiro ``*`` e utilizando bibliotecas customizadas ``Exemplo.h``, para uma melhor organização do algoritmo.
![alt text](img/listaEncadeada.svg)
**Exemplo de lista encadeada com inteiros:**

---

~~~ c/c++
// Estrutura da lista encadeada. 
  typedef struct LISTA{
    int valor;
    struct LISTA * proximo;
  }Lista;
~~~
