#include <stdio.h>

char *ft_strdup(char *src);

int main() {
  char t[] = "abcd";
  printf("%s %s\n", t, ft_strdup(t));
}
