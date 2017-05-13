#include <stdio.h>
#include <string.h>

void swap_string(char** src_A, char** src_B) {
  char* string_buff;
  string_buff = *src_A;
  *src_A = *src_B;
  *src_B = string_buff;
}

int main() {
  char* src[3] = {"AAAAA", "BBBBB", "CCCCC"};
  int i;
  
  for (i = 0; i < 3; i++) puts(src[i]);
  putchar('\n');

  swap_string(&src[0], &src[1]);
  
  for (i = 0; i < 3; i++) puts(src[i]);    
  putchar('\n');
  
  return 0;
}
