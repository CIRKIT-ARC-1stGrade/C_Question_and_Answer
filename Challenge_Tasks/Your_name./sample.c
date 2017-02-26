#include <stdio.h>

int main(void){
  const char array[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  int i, j;

  char myname[] = {"TANAKA DAIKI"};
  puts(myname);
  
  for (i = 0; array[i] != '\0'; i++) { // A to Z
    for (j = 0; myname[j] != '\0'; j++) { // On your name
      if (array[i] == myname[j]) putchar(array[i]); // display the found alfabet
    }
  }
  putchar('\n');
  
  return 0;
}
