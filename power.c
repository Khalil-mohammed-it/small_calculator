#include <stdio.h>

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

int main() {
  int base, pot;
  printf("Eingabe: ");
  scanf("%d %d", &base, &pot);

  int result = power(base, pot);
  printf("Ausgabe: %d", result);
  return 0;
}