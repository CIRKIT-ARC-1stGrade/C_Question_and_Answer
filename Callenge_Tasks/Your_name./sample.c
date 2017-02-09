#include <stdio.h>

int main(void){

  char myname[12] = {"TANAKA DAIKI"};
  int i, j;
  char array[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

  printf("%s\n", myname);
  
  for (i = 0; array[i] != '\0'; i++){
    for (j = 0; myname[j] != '\0'; j++){
      if (array[i] == myname[j]) printf("%c", array[i]);
    }
  }
  putchar('\n');
  
  return 0;
}
