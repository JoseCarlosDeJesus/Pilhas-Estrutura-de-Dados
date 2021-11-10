#include<stdio.h>
#include<stdlib.h>

#define MAX 50

struct pilha{
    int n;
    int vet[MAX];
}
typedef struct pilha Pilha;

int pop(Pilha*p){
    int v;
    if(vazia(p)){
       printf("Pilha vazia\n");
       exit(1);
    }
    v=p->vet[p->n-1];
    p->n--;
    return v;
}
