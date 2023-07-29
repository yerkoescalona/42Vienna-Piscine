
#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int main() {
  char testString[] =
      "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  printf("%s\n", testString);
  printf("%s\n", ft_strcapitalize(testString));
  return 0;
}
