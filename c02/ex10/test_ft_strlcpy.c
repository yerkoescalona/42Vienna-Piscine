
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void) {
  char s1[] = "Hola Mundo";
  char s2[] = "Hello World";
  printf("ft_strlcpy out %d\n", ft_strlcpy(s1, s2, 30));
  printf("ft_strlcpy str %s\n", s1);
}
