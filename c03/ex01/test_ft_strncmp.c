
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main() {


  char t1[] = "ABC";
  char t12[] = "ABC";
  char t13[] = "ABC";
  char t2[] = "AB";
  char t3[] = "";
  char t4[] = "1234";

  printf("%s\t%s\t%d\n", t1, t2, ft_strncmp(t1, t2, 2));   
  printf("%s\t%s\t%d\n", t12, t3, ft_strncmp(t12, t3, 2)); 
  printf("%s\t%s\t%d\n", t13, t4, ft_strncmp(t13, t4, 2));

													 
  char s1[] = "ABC";
  char s12[] = "ABC";
  char s13[] = "ABC";
  char s2[] = "AB";
  char s3[] = "";
  char s4[] = "1234";

  printf("%s\t%s\t%d\n", s1,  s2, strncmp(s1,  s2, 2));   
  printf("%s\t%s\t%d\n", s12, s3, strncmp(s12, s3, 2)); 
  printf("%s\t%s\t%d\n", s13, s4, strncmp(s13, s4, 2));
													 
}
