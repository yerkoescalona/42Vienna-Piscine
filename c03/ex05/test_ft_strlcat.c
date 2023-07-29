
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main() {

  char t1[] = "ABC";
  char t12[] = "ABC";
  char t13[] = "ABC";
  char t2[] = "AB";
  char t3[] = "";
  char t4[] = "1234";

  printf("%s\t%s\t%d\t%s\n", t1, t2, ft_strlcat(t1, t2, 10), t1);
  printf("%s\t%s\t%d\t%s\n", t12, t3, ft_strlcat(t12, t3, 10), t12);
  printf("%s\t%s\t%d\t%s\n", t13, t4, ft_strlcat(t13, t4, 10), t13);

  char s1[] = "ABC";
  char s12[] = "ABC";
  char s13[] = "ABC";
  char s2[] = "AB";
  char s3[] = "";
  char s4[] = "1234";

  printf("%s\t%s\t%d\t%s\n", s1, s2, strlcat(s1, s2, 10), s1);
  printf("%s\t%s\t%d\t%s\n", s12, s3, strlcat(s12, s3, 10), s12);
  printf("%s\t%s\t%d\t%s\n", s13, s4, strlcat(s13, s4, 10), s13);
}
