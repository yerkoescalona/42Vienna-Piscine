#include <stdio.h>

int ft_find_next_prime(int nb);

int main() {
  for (int i = -10; i < 30; i++) {
    // if (ft_find_next_prime(i)) {
    printf("next prime of %d: %d\n", i, ft_find_next_prime(i));
    //}
  }
}
