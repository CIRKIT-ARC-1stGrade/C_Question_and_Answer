#include <stdio.h>
#include <stdlib.h>

void show_help(const char* prog_name) {
  printf("Usage:%s [number]\n"
         "[number] is max number of display numbers\n", prog_name);
}

int is_Prime(int subject) {
  int i;
  for (i = 2; i <= (subject / 2); i++)
    if (!(subject % i)) return 0;
  return 1;
}

int main(int argc, char** argv) {
  
  if (argc < 2) {
    show_help(*argv /* argv[0] */);
    return 0;
  }

  const int MAX = atoi(argv[1]);

  int subject;
  for (subject = 2; subject <= MAX; subject++)
    if (is_Prime(subject)) printf("%d\n", subject);
    
  return 0;
}
