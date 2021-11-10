#include<stdio.h>
#include<stdlib.h>

struct pilha{
       int n;//conta a capacidade da pilha de inteiros
       int b;//conta a capacidade da pilha de caracteres
       int vet[MAX];
       char string[MAX]
};
typedef struct pilha Pilha;

void push_inteiros(Pilha*p,int a){
     if(p->n==MAX){
        printf("Capacidade ultrapassada\n");
        exit(1);
     }
     p->vet[p->n]=a;
     p->n++;
}

void push_caracteres(Pilha*p,char a){
     if(p->b==MAX){
        printf("Capacidade ultrapassada\n");
        exit(1);
     }
     p->string[p->b]=a;
     p->b++;
}
