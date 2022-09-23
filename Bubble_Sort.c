#include <stdio.h>

int main() {

  int v[5] = {2,7,3,9,6}, aux=0, n=5;

  // for que lê do primeiro até o penúltimo elemento do vetor
  for(int i=1; i<n; i++){
    
    // Percorre o vetor a partir do primeiro até o penúltimo elemento do vetor, e a cada ciclo compara o elemento atual com o próximo e os troca de posição se caso o atual seja maior do que o próximo.
    
    for(int k=0; k<n-1; k++){

      // A troca é feita da seguinte forma: a váriavel auxiliar recebe o valor que está em v[k+1] para que ele não seja perdido durante a operação de troca, em seguida o vetor na posição v[k+1] recebe o valor que está em v[k], e por fim v[k] recebe o valor armazenado na váriavel auxiliar.

      if(v[k]>v[k+1]){
        aux = v[k+1];
        v[k+1] = v[k];
        v[k] = aux;
      }
    }
  }

  // Imprime na tela o vetor ordenado.
  for(int j=0; j<n; j++){
    printf("%d \n", v[j]);
  }

  return 0;
}
