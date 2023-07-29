#include <stdio.h>

int ft_sqrt(int nb);

int main() {
  for (int i = -10; i < 1000; i++) {
    if (ft_sqrt(i)) {
      printf("sqrt(%d) %d\n", i, ft_sqrt(i));
    }
  }
}
