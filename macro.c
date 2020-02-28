#include <stdio.h>
#include <stdlib.h>

#define IS_LOWER(A) (A >= 'a' && A <= 'z')

int main(int argc, char const *argv[]) {
  char ch = 'h';
  if (IS_LOWER(ch)) {
    printf("Lower\n");
  }
  else {
    printf("Not Lower\n");
  }
  return 0;
}
