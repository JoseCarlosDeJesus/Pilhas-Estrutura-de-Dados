#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

struct pilha{
       int n;
       char vet[MAX]
};
typedef struct pilha Pilha;

char pop(Pilha*p){
     char v;
     v=p->vet[p->n-1];
     p->n--;
     return v;
}

int palindromo_pilha(Pilha*p){
    char palavra_original[MAX];
    char palindromo[MAX];
    int i;int j=0;
    for(i=p->n;i<=0-;i--){
        palavra_original[i]=pop(p);//a palavra vai se formando de trás para frente criando ela originalmente
        palindromo[j]=palavra_original[i];//coloca a palavra de forma reversa
        j++;
    }
    if(strcmp(palavra_original,palindromo)== 0){
       return 0;
    }
    else{
       return 1;
    }
}
