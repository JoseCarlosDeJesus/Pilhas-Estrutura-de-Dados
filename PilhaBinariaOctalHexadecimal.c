#include<stdio.h>
#include<stdlib.h>

#define MAX 500

struct pilha{
       int n;
       int vet[MAX];
};
typedef struct pilha Pilha;


void pilha_binaria(Pilha*p,int a){
    int vet_bin[MAX];
    int i=0;
    int aux_num=a;//guarda o numero em decimal

    while(a>0){
        vet_bin[i]= a%2;
        p=push(p,vet_bin[i]);//vai colocando o numero em binário na pilha
        i++;
        a=a/2;
    }
}

void pilha_octal(Pilha*p,int a){
    int vet_octal[MAX];
    int i=0;
    int aux_num=a;//guarda o numero em decimal

    while(a>0){
        vet_bin[i]= a%8;
        p=push(p,vet_octal[i]);//vai colocando o numero em binário na pilha
        i++;
        a=a/2;
    }
}

void pilha_hexadecimal(Pilha*p,int a){
    int vet_hexadecimal[MAX];
    int i=0;
    int aux_num=a;//guarda o numero em decimal

    while(a>0){
        vet_bin[i]= a%16;
        p=push(p,vet_hexadecimal[i]);//vai colocando o numero em binário na pilha
        i++;
        a=a/2;
    }
}

Pilha*cria(){
        pilha*p=(Pilha*)malloc(sizeof(Pilha));
        p->n=0;
        return p;
}
void push(Pilha*p,int v){
     if(p->n==MAX){
        printf("Capacidade da pilha esgotou");
        exit(1);
     }
     p->vet[p->n]=v;
     p->n++;
}

int main(){
    char c;
    scanf("%c",&c);
    int decimal;
    scanf("%d",&decimal);
    Pilha* converte=cria();
    switch(c){
         case 'B' || 'b':
               pilha_binaria(converte,decimal);
               break;
         case 'O'|| 'o':
               pilha_octal(converte,decimal);
               break;
         case 'H'|| 'h':
               pilha_hexadecimal(converte,decimal);
               break;
    }
}
