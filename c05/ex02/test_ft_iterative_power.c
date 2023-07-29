#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main() {
  for (int i = -2; i < 5; i++) {
    for (int j = -2; j < 5; j++) {
      printf("%d^%d\t%d\n", i, j, ft_iterative_power(i, j));
    }
  }
}
