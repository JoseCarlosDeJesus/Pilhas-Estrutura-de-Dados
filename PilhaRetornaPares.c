#include<stdio.h>
#include<stdlib.h>
#define MAX 200

struct pilha{
    int n;
    int vet[MAX];
};
typedef struct pilha Pilha;

int retorna_pares_pilha(Pilha*p){
    int i;
    int pares=0;
    for(i=0;i<=p->n-1;i++){
        if((p->vet[i]%2)==0){
           pares++;
        }
        else{
           continue;
        }
    }
    return pares;
}
