#include <stdio.h>

int rem(int a, int b) {
  if (a <= 0 || b <= 0) {
    return -1;
  }
  int q = a / b;
  int r = a - q * b;
  return r;
}

int main() {
  int a, b;
  printf("Eingabe: ");
  scanf("%d %d", &a, &b);

  int result = rem(a, b);
  printf("Ausgabe: %d", result);
  return 0;
}
