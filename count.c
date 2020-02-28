#include <stdio.h>
#include <stdlib.h>

void count(int x[], int n) {
  int n3 = 0, n5 = 0, n10 = 0, n12 = 0, other = 0;  //value[4] = {3, 5, 10, 12};
  for (size_t i = 0; i < n; i++) {                  //c[5] = {0};
    switch (x[i]) {
      case 3: n3++;                                 //c[0]++;
              break;
      case 5: n5++;                                 //c[1]++;
              break;
      case 10: n10++;                               //c[2]++;
              break;
      case 12: n12++;                               //c[3]++;
              break;
      default: other++;                             //c[4]++;
    }
  }
    printf("3 : %2d\n", n3);
    printf("5 : %2d\n", n5);
    printf("10 : %2d\n", n10);
    printf("12 : %2d\n", n12);
    printf("Other : %d\n", other);
}

int main(int argc, char const *argv[]) {
  int x[] = {3,5,10,12,3,1};
  count(x,6);
  return 0;
}
