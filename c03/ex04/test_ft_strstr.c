
#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main() {
  char s1[] = "abcde";
  char s2[] = "xyz";
  char s3[] = "abc";
  char s4[] = "cde";
  char s5[] = "123";	
  char s6[] = "123456";	

  printf("%s %s %s\n", s1, s2, ft_strstr(s1, s2));
  printf("%s %s %s\n", s1, s3, ft_strstr(s1, s3));
  printf("%s %s %s\n", s1, s4, ft_strstr(s1, s4));
  printf("%s %s %s\n", s5, s6, ft_strstr(s5, s6));
  return 0;
}
