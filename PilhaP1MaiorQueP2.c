#include<stdio.h>
#include<stdlib.h>

#define MAX 50

struct pilha{
     int n;
     int vet[MAX];
};
typedef struct pilha Pilha;


int testa_pilhas(Pilha*P1,Pilha*P2){
    if((P1->n)>(P2->n)){
        return 0;
    }
    else{
        return 1;
    }
}
