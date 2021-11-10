#define N 100
char pilha[N];
int t;

// Esta fun��o devolve 1 se a string ASCII s
// cont�m uma sequ�ncia bem-formada de
// par�nteses e colchetes e devolve 0 se
// a sequ�ncia � malformada.

int bemFormada (char s[])
{
   criapilha ();
   for (int i = 0; s[i] != '\0'; ++i) {
      char c;
      switch (s[i]) {
         case ')': if (pilhavazia ()) return 0;
                   c = desempilha ();
                   if (c != '(') return 0;
                   break;
         case ']': if (pilhavazia ()) return 0;
                   c = desempilha ();
                   if (c != '[') return 0;
                   break;
         default:  empilha (s[i]);
      }
   }
   return pilhavazia ();
}

void criapilha (void) {
   t = 0;
}

void empilha (char y) {
   pilha[t++] = y;
}

char desempilha (void) {
   return pilha[--t];
}

int pilhavazia (void) {
   return t <= 0;
}
