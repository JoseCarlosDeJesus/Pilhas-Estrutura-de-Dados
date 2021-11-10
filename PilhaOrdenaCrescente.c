#include<stdio.h>
#include<stdlib.h>

#define MAX 200

struct pilha{
       int n;
       int vet[MAX];
};
typedef struct pilha Pilha;

int vazia(Pilha*p){
    return(p->n==0);
}
void push(Pilha*p,int a){
     if(p->n==MAX){
        printf("Capacidade ultrapassada\n");
        exit(1);
     }
     p->vet[p->n]=a;
     p->n++;
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

void ordena_pilha_crescente(Pilha*p){
     int arruma[MAX];//vetor auxiliar para ordenar a pilha
     int i; int j;
     int cont=p->n;
     for(i=0;i<=cont;i++){
         arruma[i]=pop(p);//coloca o ultimo elemento da pilha no vetor até que nao tenha mais elementos
         if(vazia(p)==0){
           break;
         }
     }
     for(i=0;i<=cont;i++){
         for(j=0;j<=cont;j++){
            if(arruma[j]<arruma[i]){
               arruma[i]=arruma[j];
            }
         }
     }
     for(i=0;i<=cont;i++){
         push(p,arruma[i]);//coloca ordenamente na pilha de novo
     }
}
