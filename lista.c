#include "biblioteca.h"

#include "lista.h"

/* lista dinamica */

typedef struct no {                 //estrutura do nó
    void* info;
    struct no* prox;
} no;

typedef struct conteudo {          //estrutura do conteudo
    no* inicio;
    int tam;
    no* fim;
} conteudo;


/* aloc dinamica = aumento o tamanho e preencho de uma maneira indeterminada
 */
void* crialista() {                //cria a lista
    conteudo* c = (conteudo*) calloc(1, sizeof(conteudo));         //aloca espaço para a lista
    c->inicio = NULL;                                          //inicia o começo da lista como NULL 
    c->tam = 0;                                                //inicia o tamanho da lista como 0
    c->fim = NULL;                                             //inicia o fim da lista como NULL
    return c;
}

void* inserelista (void* lista, void* info) {      //insere um elemento na lista
    conteudo* c = (conteudo*) lista;               //cria um conteudo que recebe a lista
    no* n = (no*) calloc(1, sizeof(no));              //cria um nó que recebe o espaço alocado para o nó
    n->info = info;                                //o nó recebe a informação
    n->prox = NULL;                                //o nó recebe o proximo como NULL
    if (c->inicio == NULL) {                       //se o inicio da lista for NULL
        c->inicio = n;                             //o inicio da lista recebe o nó
        c->fim = n;                                //o fim da lista recebe o nó
    } else {                                       //se não
        c->fim->prox = n;                          //o proximo do fim da lista recebe o nó
        c->fim = n;                                //o fim da lista recebe o nó
    }
    c->tam++;                                      //aumenta o tamanho da lista
    return c;
}

void* removElemento(void* lista, void* info) {     //remove um elemento da lista
    conteudo* c = (conteudo*) lista;               //cria um conteudo que recebe a lista
    no* n = c->inicio;                             //cria um nó que recebe o inicio da lista
    no* ant = NULL;                                //cria um nó que recebe NULL
    while (n != NULL) {                            //enquanto o nó for diferente de NULL

        if (n->info == info) {                     //se a informação do nó for igual a informação recebida
            if (ant == NULL) {                     //se o anterior for NULL
                c->inicio = n->prox;               //o inicio da lista recebe o proximo do nó
            } else {                               //se não
                ant->prox = n->prox;               //o proximo do anterior recebe o proximo do nó
            }
            if (n->prox == NULL) {                 //se o proximo do nó for NULL
                c->fim = ant;                      //o fim da lista recebe o anterior
            }
            free(n);                               //libera o nó
            c->tam--;                              //diminui o tamanho da lista
            return c;                              //retorna a lista
        }
        ant = n;                                   //o anterior recebe o nó
        n = n->prox;                               //o nó recebe o proximo do nó
    }
    return c;                                      //retorna a lista
}


/* obtem informações sobre começo proximo conteudo e final */

void* obterinicio(void* lista) {                   //retorna o inicio da lista
    conteudo* c = (conteudo*) lista;               //cria um conteudo que recebe a lista
    return c->inicio;                              //retorna o inicio da lista
}

 void* obterproximo(void* node) {                //retorna o proximo da lista
    no* c = (no*) node;                          //cria um nó que recebe a lista  
    return c->prox;                               //retorna o proximo da lista
}

void* obterinfo(void* node) {                    //retorna a informação da lista
    no* c = (no*) node;                          //cria um nó que recebe a lista
    return c->info;                               //retorna a informação da lista
}

void* obterfim(void* lista) {                     //retorna o fim da lista
    conteudo* c = (conteudo*) lista;              //cria um conteudo que recebe a lista
    return c->fim;                                //retorna o fim da lista
}


