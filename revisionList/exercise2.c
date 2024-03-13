// Exercício 2

#include <stdio.h>

int recursion(int n) {
  if (n == 0) {
    return 0;
  }
  printf("%i\n", n);

  recursion(n - 2);
}

int main() {
  int n;
  scanf("%i", &n);
  recursion(n);
}