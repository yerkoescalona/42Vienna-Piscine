#include <stdio.h>

int ft_fibonacci(int index);

int main() {
  for (int i = -2; i < 20; i++) {
    printf("%d %d\n", i, ft_fibonacci(i));
  }
}
