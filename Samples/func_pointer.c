#include <stdio.h>

int a(int value) {
  return value + 5;
}

int b(int value) {
  return value * 2;
}

int main() {

  int (*func)(int);

  func = &a;
  int value = (*func)(7);
  printf("func is a: %d\n", value);

  func = &b;
  value = (*func)(7);
  printf("func is b: %d\n", value);
}

