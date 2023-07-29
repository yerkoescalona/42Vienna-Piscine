
#include <stdio.h>

int *ft_range(int min, int max);

int main() {
  int *r = ft_range(1, 10);
  for (int i = 0; i < 9; i++) {
    printf("%d, ", r[i]);
  }
  int *s = ft_range(1, 1);
  for (int i = 0; i < 9; i++) {
    printf("%d, ", s[i]);
  }
}
