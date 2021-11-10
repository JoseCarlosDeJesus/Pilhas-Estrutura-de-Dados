#include<stdio.h>
#include<stdlib.h>

#define MAX 50

struct pilha{
    int n;
    int vet[MAX];
};
typedef struct pilha Pilha;

int FibInter(int n){//calcula o fibonacci do n termo
    int i,F,k;
    for(k=1;k<=n;k++){
        F+=i;
        i=F-i;
    }
    return F;
}

Pilha*cria(){
    Pilha*p=(Pilha*)malloc(sizeof(Pilha));
    p->n=0;
    return p;
}

void push(Pilha*p,int a){
     if(p->n==MAX){
        printf("Capacidade ultrapassada\n");
        exit(1);
     }
     p->vet[p->n]=a;
     p->n++;
}

Pilha*p acumula_fibonacci_pilha(int n){
        Pilha* c;
        int i;

        c=cria();
        for(i=0;i<=n;i++){
            c=push(c,i);
        }
        return c;
}
