#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%i", &n);

  int *vec = malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    scanf("%i", &vec[i]);
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (vec[j] > vec[j + 1]) {
        int x = vec[j];
        int y = vec[j + 1];

        vec[j] = y;
        vec[j + 1] = x;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%i", vec[i]);
  }

  free(vec);
}