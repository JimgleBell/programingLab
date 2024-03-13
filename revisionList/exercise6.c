#include <stdio.h>
#include <stdlib.h>

int main() {

  int n;
  scanf("%i", &n);

  if (n > 0) {

    int *fibonnaci = malloc((n + 1) * sizeof(int));
    fibonnaci[0] = 0;
    fibonnaci[1] = 1;

    for (int i = 1; i < n; i++) {
      fibonnaci[i + 1] = fibonnaci[i] + fibonnaci[i - 1];
    }

    for (int i = 0; i < n + 1; i++) {
      printf("%i", fibonnaci[i]);
    }

    free(fibonnaci);
  } else
    printf("0");
}