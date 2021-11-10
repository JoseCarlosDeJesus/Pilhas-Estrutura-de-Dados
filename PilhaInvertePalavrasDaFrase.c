#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 200

struct pilha{
    int n;
    char vet[MAX];
};
typedef struct pilha Pilha;

Pilha*cria();//cria a pilha
void push(Pilha *p,char v);//coloca elemento na pilha
char pop(Pilha*p);//retira elemento da pilha e o devolve
int vazia(Pilha*p);//verifica se a pilha está vazia
void libera(Pilha*p);//libera memoria utilizada

int main(){
    char v[200];//esse irá armazenar a frase original
    char palavra[200];//esse irá armazenar a palavra fornecida pela pilha
    char pal_invertida[200];//esse irá armazenar a palavra já invertida e colocar na frase invertida
    char frase_invertida[200];//esse irá printar a frase com as palavras invertidas
    int i;
    int j;
    printf("Digite a sua frase: ");
    fgets(v,200,stdin);
    Pilha*c;
    c=cria();
    for(j=0;j<=strlen(v);j++){
        i=0;
        while(v[j]!= " "){//pega apenas uma palavra por vez
        palavra[i]=v[j];
        push(c,v[j]);//coloca o elemento na pilha.
        j++;
        i++;
        }
       for(i=0;i<=c->n-1;i++)//vai retirando todos os elementos da pilha e colocando em pal_invertida
       {
        pal_invertida[i]=pop(c);
       }
       for(i=0;i<=strlen(pal_invertida);i++){
        frase_invertida[i]=pal_invertida[i]//coloca palavra invertida na frase invertida
       }
       frase_invertida[i+1]=" ";//coloca espaco no final da palavra;
    }

}

Pilha*cria(){
   Pilha*p=(Pilha*)malloc(sizeof(Pilha));
   p->n=0;
   return p;
}

void push(Pilha*p,char v){
     if(p->n==MAX){
        printf("Capacidade da pilha ultrapassada\n");
        exit(1);
     }
     else{
     p->vet[p->n]=v;
     p->n++;
     }
}

int vazia(Pilha*p){
    return(p->n==0);
}

char pop(Pilha*p){
     char v;
     if(vazia(p)){
        printf("Pilha vazia \n");
        exit(1);
     }
     v=p->vet[p->n-1];
     p->n--;
     return v;
}

void libera(Pilha*p){
     free(p);
}
