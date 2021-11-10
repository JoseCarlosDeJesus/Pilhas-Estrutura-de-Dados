#include<stdio.h>
#include<stdlib.h>

//define como ser� o n� da lista duplamente encadeada
struct no{
    int info;
    struct no*prox;
    struct no*ant;
};
typedef struct no No;

//define como ser� a pilha
struct pilha{
       No*prim;
};
typedef struct pilha Pilha;

//funcao que insere na pilha e mexe com os ponteiros que fazem a lista ser dupla retorna o n� para a pilha
No*insere_inicio(No*l,int v);

//retira o elemento do topo da pilha e retorna a pilha atualizada
Pilha* retira(Pilha*l);

//aloca memoria para a pilha
Pilha*cria();


