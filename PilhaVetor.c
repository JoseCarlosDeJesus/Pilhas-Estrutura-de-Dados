#include<stdio.h>
#include<stdlib.h>

#define MAX 50

struct pilha{
    int n;//numero de elementos na pilha atual
    float vet[MAX];
};
typedef struct pilha Pilha;

Pilha*cria(){
     Pilha*p=(Pilha*)malloc(sizeof(Pilha));
     p->n=0;//inicializa com zero os elementos
     return p;
}

//função que insere elemento em pilha de vetor
void push(Pilha*p,float v){
    if(p->n==MAX){//capacidade esgotada
       printf("Capacidade da pilha estourou.\n");
       exit(1);
    }
    //insere elemento na proxima posicao livre
    p->vet[p->n]=v;
    p->n++;
}

float pop(Pilha*p){
   float v;
   if(vazia(p)){
      printf("Pilha vazia\n");
      exit(1);
   }
   //retira elemento do topo
   v=p->vet[p->n-1];
   p->n--;
   return v;
}

int vazia(Pilha*p){
   return(p->n==0);
}

void libera(Pilha*p){
   free(p);
}

void imprime(Pilha*p){
    int i;
    for(i=p->n-1;i>=0;i--){
        printf("%f\n", p->vet[i]);
    }
}
