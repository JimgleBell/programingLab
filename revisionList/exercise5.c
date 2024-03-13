#include <stdio.h>

int fibonnaci(int n) {
  int f;
  if (n > 1) {
    f = fibonnaci(n - 1) + fibonnaci(n - 2);
  } else if (n = 1) {
    f = 1;
  } else if (n = 0) {
    f = 0;
  }
  printf("%i", f);
  
  return f;
}

int main() {
    int n;
    scanf("%i",&n);

    fibonnaci(n);
}