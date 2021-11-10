#include<stdio.h>
#include<stdlib.h>

#define MAX 50
struct pilha{
       int n;
       int vet[MAX];
};
typedef struct pilha Pilha;

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

int* maior_menor_media(Pilha*p){
     int maior;
     int menor;
     int media=0;
     int maior_menor_media[2];
     int element;

     for(i=1;i<=p->n;i++){
         if(i==1){
            maior=pop(p);//inicializa todos com o mesmo elemento: o ultimo
            menor=maior;
            media+=maior;
         }
         element=pop(p);
         if(maior<element){
            maior=element;
         }
         if(menor>element){
            menor=element;
         }
         media=element+media;
     }

     media=media/p->n;
     maior_menor_media[0]=maior;
     maior_menor_media[1]=menor;
     maior_menor_media[3]=media;

     return maior_menor_media;
}
