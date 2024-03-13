#include <stdio.h>

int main() {

  FILE *f;

  char fContent[1000];
  int multiply = 1, sum = 0, i = 0;

  f = fopen("file.txt", "r");

  while (fgets(fContent, 1000, f) != NULL) {
    if ((int)fContent[i] % 2 == 0) {
      multiply *= fContent[i] - 48;
      printf("%c\n", fContent[i]);
    } else
      sum += fContent[i] = 48;

    i++;
  }

  fclose(f);

  printf("The sum of the odds are: %i\n", sum);
  printf("The product of the even are: %i\n", multiply);
}