#include <stdio.h>

int main() {
  int vet[100000];
	int numeroVet, elementos;
	int ord;
	
	scanf("%d",&numeroVet);

	while(numeroVet--){
		scanf("%d",&elementos);
    for(int i=0 ; i<elementos; i++) { 
			scanf("%d", &vet[i]); 
		}
		ord = insertionSort(vet, elementos);
		printf("%d\n", ord);
	}

}

int insertionSort(int vet[], int tam){
  int i, pos, tmp, aux=0;
  for (i = 1; i < tam; i++) {
    tmp = vet[i];
    for (pos = i-1; pos >= 0 && (tmp < vet[pos]); pos--){
      vet[pos+1] = vet[pos];
      aux++; 
    }
    vet[pos+1] = tmp; 
  }
  return aux;
}

