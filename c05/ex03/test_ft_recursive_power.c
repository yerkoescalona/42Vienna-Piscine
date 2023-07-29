#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main() {
  for (int i = -2; i < 5; i++) {
    for (int j = -2; j < 5; j++) {
      printf("%d^%d %d\n", i, j, ft_recursive_power(i, j));
    }
  }
}
