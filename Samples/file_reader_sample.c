#include <stdio.h>

int main(int argc, char** argv) {

  FILE *fp; 

  if (argc < 2) {
    puts("Too few argumentsv!!");
    return -1;
  }
  if ((fp = fopen(argv[1], "r")) == NULL) {
    puts("Couldn't open this file !!");
    return -2;
  } 

  int input_buff;
  char input[1024];
  int i;
  for (i = 0; (input_buff = fgetc(fp)) != EOF; i++) {
    if (i >= 1024) { puts("Too large file !!"); return -3; }
    input[i] = (char)input_buff;
  }
 
  printf("%s\n", input);

  return 0;
}
