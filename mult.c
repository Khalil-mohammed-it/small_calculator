#include <stdio.h>

int mult(int a, int b) {
  if (a == 0 || b == 0) {
    return 0;
  }

  else if (b > 0) {
    return a + mult(a, b - 1);
  }

  else {
    return -a + mult(a, b + 1);
  }
}

int main() {
  int a, b;
  printf("Eingabe: ");
  scanf("%d %d", &a, &b);

  int result = mult(a, b);
  printf("Ausgabe: %d\n", result);
  return 0;
}