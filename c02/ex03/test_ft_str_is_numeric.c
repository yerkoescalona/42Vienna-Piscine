
#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str);

int main() {
  char testString1[] = "12345";
  char testString2[] = "123a45";
  char testString3[] = "";

  int result1 = ft_str_is_numeric(testString1);
  int result2 = ft_str_is_numeric(testString2);
  int result3 = ft_str_is_numeric(testString3);

  printf("Test String 1: %s\n", testString1);
  printf("Result 1: %d\n", result1);

  printf("Test String 2: %s\n", testString2);
  printf("Result 2: %d\n", result2);

  printf("Test String 3: %s\n", testString3);
  printf("Result 3: %d\n", result3);

  return 0;
}
