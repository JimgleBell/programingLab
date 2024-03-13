#include <stdio.h>
#include <stdlib.h>

float mean(float arr[], int n) {
  float sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return (sum / n);
}

int main() {
  int n;
  printf("Entre com a quantidade de notas: ", &n);
  scanf("%i", &n);
  float *arr = (float *)malloc(n * sizeof(arr));

  for (int i = 0; i < n; i++) {
    printf("Insira a nota %i: ",i+1);
    scanf("%f", &arr[i]);
  }

  float m = mean(arr, n);
  printf("%f", m);

  free(arr);
  return 0;
}