#include <stdio.h>

int main() {

  int v[5] = {7,5,9,3,1}, n = 5, aux=0, menor;

  // A cada ciclo procura o menor valor do vetor e o coloca na primeira posição. A primeira posição é descartada e repete-se o processo para a segunda. Isso é feito para todas as posições do vetor.
  for(int i = 0; i < n-1; i++){
    menor = i;
    
    // Procura o menor elemento em relação a "i".
    for(int j = i+1; j < n; j++){
      if(v[j] < v[menor])
        menor = j;
    }
    
    // Troca os valores da posição atual com a "menor".
    if(i != menor){
      aux = v[i];
      v[i] = v[menor];
      v[menor] = aux;
    }
  }
  
  // Imprime o vetor ordenado.
  for(int i = 0; i<n; i++){
    printf("%d ", v[i]);
  }
  
  return 0;
}
