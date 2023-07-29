
#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void) {
  char s1[] = "Hola Mundo";
  char s1_[] = "Hola Mundo";
  char s2[] = "Hello World";
  char s2_[] = "Hello World";
  printf("ft_strncpy %s\n", ft_strncpy(s1, s2, 6));
  printf("strncpy %s\n", strncpy(s1_, s2_, 6));
}
