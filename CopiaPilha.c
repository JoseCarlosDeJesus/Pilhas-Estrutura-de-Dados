#define MAX 500

struct pilha{
    int n;
    char vet[MAX];
};
typedef struct pilha Pilha;

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

Pilha* copia(Pilha*p,Pilha*p2){//copia a pilha p para a pilha p2
     int a[MAX];
     int i;
     cont=p->n;

     for(i=1;i<=cont;i++){
         a[i]=pop(p);
         if(p->n==0){
            break;
         }
     }
     for(i=cont;i<=1;i--){
         p2=push(p,a[i]);
     }
     return p2;
}
