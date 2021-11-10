#include<stdio.h>
#include<stdlib.h>

struct no{
    float info;
    struct no* prox;
};
typedef struct no No;

struct pilha{
    No*prim;
};
typedef struct pilha Pilha;

//cria uma pilha vazia
Pilha*cria(){
    Pilha*p=(Pilha*)malloc(sizeof(Pilha));
    p->prim=NULL;
    return p;
}

//fun��o que insere no inicio da pilha

 //fun��o auxiliar:insere no iniciou
No*ins_ini(No*l,float v){
     No*p=(No*)malloc(sizeof(No));
     p->info=v;
     p->prox=l;
     return p;
}

 //fun��o auxiliar:retira do inicio
No*ret_ini(No*l){
    No*p=l->prox;
    free(l);
    return p;
}

//fun��o que coloca na pilha

void push(Pilha*p,float v){
    p->prim=ins_ini(p->prim,v);
}

//fun��o que retira da pilha

float pop(Pilha*p){
      float v;
      if(vazia(p)){
         printf("Pilha Vazia\n");
         exit(1);
      }
      v=p->prim->info;
      p->prim=ret_ini(p->prim);
      return v;
}

int vazia(Pilha*p){
    return(p->prim==NULL);
}

void libera(Pilha*p){
     No*q=p->prim;
     while(q!=NULL){
         No*t=q->prox;
         free(q);
         q=t;
     }
     free(p);
}

void imprime(Pilha*p){
     No*q;
     for(q=p->prim;q!=NULL;q=q->prox){//la�o que percorre uma pilha de lista
        printf("%f\n", q->info);
     }
}
