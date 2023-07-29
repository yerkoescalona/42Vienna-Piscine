#include <stdio.h>

int ft_iterative_factorial(int nb);

int main() {
  for (int i = -2; i < 30; i++) {
    printf("%d! %d\n", i, ft_iterative_factorial(i));
  }
}
