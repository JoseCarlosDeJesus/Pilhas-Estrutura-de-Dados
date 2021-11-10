#include<stdio.h>
#include<stdlib.h>

#define MAX 50

//pilha de vetor char
struct pilha{
       int n;
       char vet[MAX];
};
typedef struct pilha Pilha;

int vazia(Pilha*p){
    return(p->n==0);
}

//retira um elemento da lista e devolve o elemento retirado
char pop(Pilha*p){
     char v;
     if(vazia(p)){
        printf("Pilha vazia");
        exit(1);
     }
     v=p->vet[p->n-1];
     p->n--;
     return v;
}


//retorna se a string é do formato XY, ou seja se Y é o inverso de X
int XY(Pilha* x,Pilha *y){
    char*v= (char*) malloc(x->n*sizeof(char));
    char*c=(char*) malloc(y->n*sizeof(char));
    int i, int j;
    if(x->n!=y->n){
       return 1;//se as pilhas nao tiverem o mesmo numero de elementos nao serao iguais
    }
    for(i=0;i<x->n;i++){
       v[i]= pop(x);// a string v será igual a y inicialmente se x for a inversao de y
    }
    for(j=0;j<y->n;j++){
       c[j]=pop(y);// a sting c será igual a x inicialmente se y for a inversao de x
    }
    // a string v vai comparando crescentemente seus elementos,enquanto a string c vai comparando descrescentemente seus elementos para ver se as duas strings sao iguais
    for(i=0;i<=x->n-1;i++){
        for(j=y->n-1;j>=0;j--){
            if(v[i]==c[j]){
               continue;
            }
            else{
              return 1;//nesse caso diz que elas nao sao iguais
            }
        }
    }
    return 0;// todos os elementos sao iguais entao as duas sao invertidas uma da outra com os mesmos elementos
}
