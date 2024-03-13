// Exercício 1

#include <stdio.h>

int main() {

  int i, n;
  printf("Please insert the chosen number:");
  scanf("%i", &n);

  if (n % 2 == 0) {
    while (i <= n) {
      printf("%i\n", i);
      i = i + 2;
    }
  }

  else
    while (i <= n - 1) {
      printf("%i\n", i);
      i = i + 2;
    }
  return 0;
}
