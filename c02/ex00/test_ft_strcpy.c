
#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main(void) {
  char s1[] = "abcd";
  char s1_[] = "abcd";
  char s2[] = "efgh";
  printf("ft_strcpy %s\n", ft_strcpy(s1, s2));
  printf("strcpy %s\n", strcpy(s1_, s2));
}
