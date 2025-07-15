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

int power(int base, int pot) {
  if (pot < 0) {
    return 0;
  }

  int counter = pot;
  int product = 1;

  while (counter > 0) {
    product *= base;
    counter--;
  }

  return product;
}

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
  char your_coice;

  printf("Eingabe: ");
  scanf("%d %c %d", &a, &your_coice, &b);

  switch (your_coice) {
    case '*':
      printf("Ausgabe: %d\n", mult(a, b));
      break;
    case '^':
      printf("Ausgabe: %d\n", power(a, b));
      break;
    case '/':
      printf("Ausgabe: %d\n", div(a, b));
      break;
    case '%':
      printf("Ausgabe: %d\n", rem(a, b));
      break;
    default:
      printf("Unbekannter Operator!\n");
      break;
  }

  return 0;
}
