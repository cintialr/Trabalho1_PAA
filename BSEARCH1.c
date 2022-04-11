#include <stdio.h>

int bSearch(long long int vet[],int tam, long long int n){
  int inicio = 0;
  int saida = -1;
  tam -= 1;

  do{
    int meio = (inicio+tam)/2;
    if(vet[meio]==n){
        saida = meio;
        tam = meio-1;
    }else if(vet[meio]>n){
        tam = meio-1;
    }else{
        inicio = meio + 1;
    }
  }while(inicio <= tam);

  return saida;
}

int main(){
    int N, Q;

    scanf("%d%d", &N, &Q);

    long long int v[N], n;

    for(int i=0; i<N; i++){
        scanf("%lld", &v[i]);
    }

    while(Q--){
        scanf("%lld", &n);
        printf("%d\n", bSearch(v, N, n));
    }
    return 0;
}