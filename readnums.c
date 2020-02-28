#include <stdio.h>
#include <stdlib.h>

void readnums() {
  int n, a = 0, b = 0;
  scanf("%d", &n);
  a = n;
  while (n != 0) {
    b = a;
    a = n;
    scanf("%d", &n);
  }
  printf("%d %d \n", b, a);
}

int main(int argc, char const *argv[]) {
  readnums();
  return 0;
}
