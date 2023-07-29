#include <stdio.h>

int ft_is_prime(int nb);

int main() {
  for (int i = 0; i < 1000; i++) {
    if (ft_is_prime(i)) {
      printf("%d is prime %d\n", i, ft_is_prime(i));
    }
  }
}
