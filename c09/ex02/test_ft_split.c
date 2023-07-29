#include <stdio.h>

int ft_is_charset(char c, char *charset);
int ft_get_num_elements(char *str, char *charset);
char **ft_split(char *str, char *charset);

int main() {
  char cs1[] = ",";
  char s1[] = "Ho, la;Mu,;do,,!";
  printf("get_num_elements: %s %d\n", s1, ft_get_num_elements(s1, cs1));

  char **out = ft_split(s1, cs1);
  int i = 0;
  while (out[i] != NULL) {
    printf("%s\n", out[i]);
    i++;
  }
}
