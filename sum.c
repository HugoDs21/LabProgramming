#include <stdio.h>
#include <stdlib.h>

int sum(){
  int n, soma = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    int aux;
    scanf("%d", &aux);
    soma += aux;
  }
  return soma;
}

int main(int argc, char const *argv[]) {
  printf("%d\n", sum());
  return 0;
}
