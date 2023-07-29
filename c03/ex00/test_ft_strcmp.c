
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main() {


  char t1[] = "ABC";
  char t12[] = "ABC";
  char t13[] = "ABC";
  char t14[] = "";
  char t15[] = "ABC";
  char t2[] = "AB";
  char t3[] = "";
  char t4[] = "1234";
  char t5[] = "ABC";

  printf("%s\t%s\t%d\n", t1, t2, ft_strcmp(t1, t2));   
  printf("%s\t%s\t%d\n", t12, t3, ft_strcmp(t12, t3)); 
  printf("%s\t%s\t%d\n", t13, t4, ft_strcmp(t13, t4));
  printf("%s\t%s\t%d\n", t14, t4, ft_strcmp(t14, t4));
  printf("%s\t%s\t%d\n", t15, t5, ft_strcmp(t15, t5));
  printf("%s\t%s\t%d\n", t14, t3, ft_strcmp(t14, t3));

  printf("//////////\n");
  char s1[] = "ABC";
  char s12[] = "ABC";
  char s13[] = "ABC";
  char s14[] = "";
  char s15[] = "ABC";
  char s2[] = "AB";
  char s3[] = "";
  char s4[] = "1234";
  char s5[] = "ABC";

  printf("%s\t%s\t%d\n", s1,  s2, strcmp(s1,  s2));   
  printf("%s\t%s\t%d\n", s12, s3, strcmp(s12, s3)); 
  printf("%s\t%s\t%d\n", s13, s4, strcmp(s13, s4));
  printf("%s\t%s\t%d\n", s14, s4, strcmp(s14, s4));
  printf("%s\t%s\t%d\n", s15, s5, strcmp(s15, s5));
  printf("%s\t%s\t%d\n", s14, s3, strcmp(s14, s3));
													 
}
