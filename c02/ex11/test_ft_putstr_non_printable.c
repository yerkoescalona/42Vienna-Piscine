#include <stdio.h>
#include <string.h>

void ft_putstr_non_printable(char *str);

int main() {
  char s1[] = "Coucou\ntu vas bien ?";
  printf("%s\n", s1);
  ft_putstr_non_printable(s1);
}
