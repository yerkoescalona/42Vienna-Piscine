
#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main() {


  char t1[] = "ABC";
  char t12[] = "ABC";
  char t13[] = "ABC";
  char t2[] = "AB";
  char t3[] = "";
  char t4[] = "1234";

  printf("%s\t%s\t%s\n", t1, t2, ft_strcat(t1, t2));   
  printf("%s\t%s\t%s\n", t12, t3, ft_strcat(t12, t3)); 
  printf("%s\t%s\t%s\n", t13, t4, ft_strcat(t13, t4));

													 
  char s1[] = "ABC";
  char s12[] = "ABC";
  char s13[] = "ABC";
  char s2[] = "AB";
  char s3[] = "";
  char s4[] = "1234";

  printf("%s\t%s\t%s\n", s1,  s2, strcat(s1,  s2));   
  printf("%s\t%s\t%s\n", s12, s3, strcat(s12, s3)); 
  printf("%s\t%s\t%s\n", s13, s4, strcat(s13, s4));
													 
}
