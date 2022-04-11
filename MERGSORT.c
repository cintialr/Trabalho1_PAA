#include <stdio.h>

int vet[100000], aux[100000];

void merge(int inicio, int fim){
  int meio = (inicio+fim)/2;
  int i, j, f;
  for(i = inicio; i < meio+1; i++){
    aux[i] = vet[i];
  } 
  for(i = meio+1; i < fim+1; i++) {
    aux[meio+fim+1-i] = vet[i];
  }
    
  i = inicio;
  f = fim;
  for(j = inicio; j < fim+1; j++){
    if(aux[i] <= aux[f]){
      vet[j] = aux[i];
      i++;
    }else{
      vet[j] = aux[f];
      f--;
    }
  }  
}
    
void mergeSort(int inicio, int fim){
	int meio = (inicio+fim)/2;
  if(inicio != fim){
		mergeSort(inicio, meio);
		mergeSort(meio+1, fim);
		merge(inicio, fim);
	}
}

int main(void){
	int N=0;
	while(scanf("%d", &vet[N++]) == 1);
  N--;
	mergeSort(0,N-1);
	
	for(int i = 0; i < N; i++){
		if(i == N-1){
      printf("%d ", vet[i]);
      }
		else{
      printf("%d ", vet[i]);
    } 
	}
}
