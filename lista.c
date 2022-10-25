#include "lista.h"


typedef struct no {
    Item valorno;           //valor do no
    struct no *prox;
} No;

typedef struct lst {
    int limite;
    int cont;  
    No *inicio;
    No *fim;
} Lst;


Lista createLista(int capacidade){
    Lst *L = calloc(1, sizeof(Lst));
   if (L < 0) {
    L -> limite = -1;                   //se a capacidade for menor que 0, o tamanho da lista é ilimitado
    }else{
        L -> limite = capacidade;       //se a capacidade for maior que 0, o tamanho da lista é limitado
    } 
}

Posic insert(Lista L, Item info) {
  No *aux, *novo = calloc(1, sizeof(No));
    if (novo){
        novo ->valorno = info;
        novo -> prox = NULL;
      //vai ser o primeiro no?
        if (L == NULL){
            L = novo;
        }else{
            aux = L;
            while (aux -> prox != NULL){
                aux = aux -> prox;
                aux -> prox = novo;
            }
        }
    }else
        printf("Erro de alocacao\n");
}

int length(Lista L){                  //retorna o tamanho da lista
    int cont = 0;
    No *aux = L;
    while (aux != NULL){             //enquanto nao chegar no final da lista
        cont++;                      //conta
        aux = aux -> prox;           //vai para o proximo
    }   
    return cont;   
}

int maxLength(Lista L){
    Lst *lst = (Lst*) L;            
    return lst -> limite;           //retorna o tamanho maximo da lista
}

bool isEmpty(Lista L){              //retorna verdadeiro se a lista estiver vazia
    Lst *lst = (Lst*) L;            
    if (L == NULL)
        return true;
    else
        return false;
}

bool isFull(Lista L){               //verifica se a lista esta cheia
    return false;
}

Item pop(Lista L){                                          //retorna o primeiro elemento da lista
    No *aux = L;
    Item valorno;
    if (L == NULL){                                         //se a lista estiver vazia
        printf("Lista vazia\n");
        return NULL;
    }else{
    valorno = aux ->valorno;                                     //pega o valor do primeiro no
        L = aux -> prox;                                    //vai para o proximo no
        free(aux);                                          //libera o primeiro no
        return valorno;                                          //retorna o valor do primeiro no
    }
} 

void remov(Lista L, Posic p){                               //remove o elemento da lista L indicado por p
    No *aux = L;
    No *aux2 = p;
    if (L == NULL){                                         //se a lista estiver vazia
        printf("Lista vazia\n");
    }else{
        while (aux -> prox != aux2){                        //enquanto nao chegar no no anterior ao que sera removido
            aux = aux -> prox;                              //vai para o proximo no
        }
        aux -> prox = aux2 -> prox;                         //o no anterior ao que sera removido aponta para o proximo do que sera removido
        free(aux2);                                         //libera o no que sera removido
    }
}

Item get(Lista L, Posic p){                                //retorna o valor do no indicado por p
    No *aux = p;                                           //aux recebe o no indicado por p
    return aux ->valorno;                                       //retorna o valor do no
}


Posic insertBefore(Lista L,Posic p, Item info){             //insere um elemento antes do elemento indicado por p   
    No *aux = L;
    No *aux2 = p;
    No *novo = calloc(1, sizeof(No));
    if (novo){                                              
        novo ->valorno = info;                                   //insere o valor no novo no
        novo -> prox = NULL;
        if (L == NULL){                                     //se a lista estiver vazia
            L = novo;
        }else{
            while (aux -> prox != aux2){                    //enquanto nao chegar no no anterior ao que sera inserido
                aux = aux -> prox;                          //vai para o proximo no
            }
            aux -> prox = novo;                             //o no anterior ao que sera inserido aponta para o novo no
            novo -> prox = aux2;                            //o novo no aponta para o no que sera inserido
        }
    }else
        printf("ERRO!\n");
}

Posic insertAfter(Lista L,Posic p, Item info){      //
    No *aux = L;
    No *aux2 = p;
    No *novo = calloc(1, sizeof(No));
    if (novo){                                              
        novo ->valorno = info;                                  //insere o valor no novo no
        novo -> prox = NULL;
        if (L == NULL){                                     //se a lista estiver vazia
            L = novo;
        }else{
            while (aux != aux2){                            //enquanto nao chegar no no que sera inserido
                aux = aux -> prox;                          //vai para o proximo no
            }
            aux -> prox = novo;                             //o no que sera inserido aponta para o novo no
            novo -> prox = aux2 -> prox;                    //o novo no aponta para o proximo do no que sera inserido
        }
    }else
        printf("ERRO!\n");
}

Posic getFirst(Lista L){

    if (length(L) == 0)
        return NULL;
    else
        return L;
}

Posic getNext(Lista L,Posic p){
    No *NO = (No*) p;
    return NO -> prox;
    
}

Posic getLast(Lista L){                                     //retorna o ultimo elemento da lista
    No *aux = L;
    if (length(L) == 0){                                         //se a lista estiver vazia
        return NULL;
    }
}

Posic getPrevious(Lista L,Posic p){                           //retorna o elemento anterior ao indicado por p 
    Lst *lst = (Lst*) L;
    No *NO = lst -> inicio;                                    //NO recebe o primeiro no da lista
    if (NO == p)                                               //se o primeiro no for o que esta sendo procurado
        return NULL;                                           //retorna NULL
    while (NO -> prox != p){                                   //enquanto nao chegar no no anterior ao que esta sendo procurado
        NO = NO -> prox;    
    }
    return NO;
}

void killLista(Lista L){                                    //libera a lista
    No *aux = L;
    No *aux2;
    while (aux != NULL){                                    //enquanto nao chegar no final da lista
        aux2 = aux -> prox;                                 //aux2 aponta para o proximo no
        free(aux);                                          //libera o no atual
        aux = aux2;                                         //aux aponta para o proximo no
    }
}