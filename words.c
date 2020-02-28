#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef enum {FALSE, TRUE} BOOL;
#define LETTER(C) (C >= 'a' && C <= 'z' || C >= 'A' && C <= 'Z' || C >= '0' && C <= '9')
#define BLANK(C) (C == '\n' || C == ' ' || C == '\t')

char skip(FILE *fp){
  char ch;
  do {
    ch = fgetc(fp)
  } while(ch != EOF && !BLANK(ch));
  while (ch != EOF && BLANK(ch)) {
    ch = fgetc(ch)
  }
  return ch;
}

BOOL check_word(FILE *fp){

  return TRUE;
}

int main(int argc, char const *argv[]) {
  int words = 0;
  char ch;
  if(argc < 2 || argc > 2){
      printf("Usage: %s \"file\"\n", argv[0]);
      exit(EXIT_FAILURE);
  }

  FILE *fp;

  fp = fopen (argv[1],"r");

  if (fp==NULL){
    printf("CANNOT OPEN FILE\n");
    exit(EXIT_FAILURE);
  }

  ch = fgetc(fp);

  while (BLANK(ch)) {
    ch = skip(fp);
  }

  fclose(fp);
  printf("%d\n", words);
  return 0;
}
