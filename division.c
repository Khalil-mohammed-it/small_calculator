#include <stdio.h>

int div(int a, int b) {
  if (b == 0) {
    return 0;
  }

  int negative = 0;
  if (a < 0) {
    a = -a;
    negative = !negative;
  }
  if (b < 0) {
    b = -b;
    negative = !negative;
  }
  int counter;
  for (counter = 0; a >= b; counter++) {
    a -= b;
  }

  return negative ? -counter : counter;
}

int main() {
  int a, b;
  printf("Eingabe: ");
  scanf("%d %d", &a, &b);

  int result = div(a, b);
  printf("Ausgabe: %d", result);

  return 0;
}