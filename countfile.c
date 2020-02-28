#include <stdio.h>
#include <stdlib.h>

#define IS_LOWER(A) (A >= 'a' && A <= 'z')


int main(int argc, char const *argv[]) {
  int lower = 0;
  char ch;
  FILE *fp;
  fp = fopen (argv[1],"r");
  if (fp==NULL){
    printf("CANNOT OPEN FILE\n");
  }
  while ((ch = fgetc(fp)) != EOF) {
    if (IS_LOWER(ch)) {
      lower++;
    }
  }
  fclose(fp);
  printf("%d\n", lower);
  return 0;
}
