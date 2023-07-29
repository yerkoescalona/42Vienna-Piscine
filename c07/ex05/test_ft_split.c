#include <stdio.h>

int ft_is_charset(char c, char *charset);
int ft_get_num_elements(char *str, char *charset);
char **ft_split(char *str, char *charset);

int main() {
  char c1 = ';';
  char cs1[] = ",;";
  printf("is_charset: %c %s %d\n", c1, cs1, ft_is_charset(c1, cs1));

  char s1[] = "Ho,la;Mu,;do,,!";
  char s2[] = ",,;";
  char s3[] = "            ";
  char s4[] = ";,Ho";
  char s5[] = "Ho;,";
  char s6[] = "abcdefghi";
  printf("get_num_elements: %s %d\n", s1, ft_get_num_elements(s1, cs1));
  printf("get_num_elements: %s %d\n", s2, ft_get_num_elements(s2, cs1));
  printf("get_num_elements: %s %d\n", s3, ft_get_num_elements(s3, cs1));
  printf("get_num_elements: %s %d\n", s4, ft_get_num_elements(s4, cs1));
  printf("get_num_elements: %s %d\n", s5, ft_get_num_elements(s5, cs1));
  printf("get_num_elements: %s %d\n", s6, ft_get_num_elements(s6, cs1));

  char **out = ft_split(s1, cs1);
  int i = 0;
  while (out[i] != NULL) {
    printf("%s\n", out[i]);
    i++;
  }
}
