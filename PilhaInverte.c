#include<stdio.h>
#include<stdlib.h>

#define MAX 50

struct pilha{
       int n;
       char vet[MAX];
};
typedef struct pilha Pilha;

Pilha*cria(){
     Pilha*p=(Pilha*)malloc(sizeof(Pilha));
     p->n=0;
     return p;
}

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

void push(Pilha*p, int a){
     if(p->n==MAX){
        printf("Capacidade Excedida\n");
        exit(1);
     }
     p->vet[p->n]=a;
     p->n++;
}

Pilha* inverte_pilha(Pilha*p){
     Pilha*c;
     int a;

     c=cria(c);
     for(i=1;i<=p->n;i++){
         a=pop(p);
         c=push(c,a);
     }
     return c;
}
